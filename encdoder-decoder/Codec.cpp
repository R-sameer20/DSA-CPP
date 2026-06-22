#include "Codec.h"
#include "HuffmanTree.h"
#include "Bitstream.h"

#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <cstring>
#include <stdexcept>

namespace Codec {

// =====================================================
//  HELPERS
// =====================================================

static const char MAGIC[4] = { 'H', 'U', 'F', '\x01' };

// Write a little-endian uint64_t
static void writeU64(std::ofstream& out, uint64_t val) {
    for (int i = 0; i < 8; ++i)
        out.put(static_cast<char>((val >> (8 * i)) & 0xFF));
}

// Write a little-endian uint32_t
static void writeU32(std::ofstream& out, uint32_t val) {
    for (int i = 0; i < 4; ++i)
        out.put(static_cast<char>((val >> (8 * i)) & 0xFF));
}

// Read a little-endian uint64_t
static uint64_t readU64(std::ifstream& in) {
    uint64_t val = 0;
    for (int i = 0; i < 8; ++i) {
        int b = in.get();
        if (b == EOF) throw std::runtime_error("Unexpected EOF (uint64)");
        val |= (static_cast<uint64_t>(b) << (8 * i));
    }
    return val;
}

// Read a little-endian uint32_t
static uint32_t readU32(std::ifstream& in) {
    uint32_t val = 0;
    for (int i = 0; i < 4; ++i) {
        int b = in.get();
        if (b == EOF) throw std::runtime_error("Unexpected EOF (uint32)");
        val |= (static_cast<uint32_t>(b) << (8 * i));
    }
    return val;
}

// Serialise tree to bit-string and collect ordered leaf characters
static std::string serialiseTree(HuffmanNode* node,
                                  std::vector<unsigned char>& leaves) {
    if (!node) return "";
    if (node->isLeaf) {
        leaves.push_back(node->ch);
        return "1";
    }
    return "0"
         + serialiseTree(node->left,  leaves)
         + serialiseTree(node->right, leaves);
}

// Pack a bit-string into bytes and write them; returns number of bytes written
static uint32_t packBitsToFile(std::ofstream& out, const std::string& bits) {
    uint32_t count = 0;
    for (size_t i = 0; i < bits.size(); i += 8) {
        uint8_t byte = 0;
        for (int b = 0; b < 8 && (i + b) < bits.size(); ++b)
            byte = static_cast<uint8_t>((byte << 1) | (bits[i + b] - '0'));
        // Pad the last partial byte on the right
        if (bits.size() - i < 8)
            byte = static_cast<uint8_t>(byte << (8 - (bits.size() - i)));
        out.put(static_cast<char>(byte));
        ++count;
    }
    return count;
}

// Read `byteCount` bytes and unpack exactly `bitCount` bits into a string
static std::string unpackBitsFromFile(std::ifstream& in,
                                       uint32_t byteCount,
                                       uint32_t bitCount) {
    std::string bits;
    bits.reserve(byteCount * 8);
    for (uint32_t i = 0; i < byteCount; ++i) {
        int b = in.get();
        if (b == EOF) throw std::runtime_error("Unexpected EOF reading tree bits");
        for (int bit = 7; bit >= 0; --bit)
            bits += (char)('0' + ((b >> bit) & 1));
    }
    bits.resize(bitCount);   // trim padding at the tail
    return bits;
}


// =====================================================
//  COMPRESS
// =====================================================
Stats compress(const std::string& inputFile, const std::string& outputFile) {

    // Step 1: Read entire input into memory
    std::ifstream in(inputFile, std::ios::binary);
    if (!in) throw std::runtime_error("Cannot open input: " + inputFile);

    std::vector<unsigned char> data(
        (std::istreambuf_iterator<char>(in)),
         std::istreambuf_iterator<char>());
    in.close();

    if (data.empty()) {
        // Produce a minimal .huf file representing empty input so decompression
        // restores an empty file instead of failing.
        std::ofstream outEmpty(outputFile, std::ios::binary);
        if (!outEmpty) throw std::runtime_error("Cannot open output: " + outputFile);
        outEmpty.write(MAGIC, 4);
        outEmpty.put(static_cast<char>(0));          // padding
        writeU64(outEmpty, 0);                       // totalBits
        writeU32(outEmpty, 0);                       // leaf count = 0
        writeU32(outEmpty, 0);                       // tree bit-count = 0
        outEmpty.close();

        Stats stats;
        stats.originalBytes   = 0;
        stats.compressedBytes = static_cast<uint64_t>(std::ifstream(outputFile, std::ios::binary | std::ios::ate).tellg());
        stats.compressionRatio = 0.0;
        stats.spaceSavings = 0.0;
        return stats;
    }

    // Step 2: Frequency counting - O(N)
    // Use a fixed 256-element array for O(1) lookup (all ASCII/byte values)
    int freqArr[256] = {};
    for (unsigned char c : data) freqArr[c]++;

    std::unordered_map<unsigned char, int> freqTable;
    for (int i = 0; i < 256; ++i)
        if (freqArr[i] > 0)
            freqTable[static_cast<unsigned char>(i)] = freqArr[i];

    // Step 3: Build Huffman Tree - O(N log N)
    HuffmanTree tree;
    tree.build(freqTable);

    // Step 4: Generate prefix codes via DFS
    std::unordered_map<unsigned char, std::string> codeTable = tree.generateCodes();

    // Step 5: Serialise tree for header
    std::vector<unsigned char> leaves;
    // Use HuffmanTree::serialise to produce tree bits and ordered leaves
    std::string treeBits = tree.serialise(leaves);
    uint32_t treeBitCount  = static_cast<uint32_t>(treeBits.size());

    // Step 6: Calculate total payload bits
    uint64_t totalBits = 0;
    for (unsigned char c : data) totalBits += codeTable.at(c).size();
    uint8_t padding = static_cast<uint8_t>((8 - (totalBits % 8)) % 8);

    // Step 7: Open output and write header
    std::ofstream out(outputFile, std::ios::binary);
    if (!out) throw std::runtime_error("Cannot open output: " + outputFile);

    // Magic
    out.write(MAGIC, 4);
    // Padding bits count (so decoder knows to ignore last N bits)
    out.put(static_cast<char>(padding));
    // Total compressed bits (for BitReader bounds checking)
    writeU64(out, totalBits);
    // Leaf count
    writeU32(out, static_cast<uint32_t>(leaves.size()));
    // Leaf characters
    for (unsigned char leaf : leaves) out.put(static_cast<char>(leaf));
    // Tree structure bit-count
    writeU32(out, treeBitCount);
    // Tree structure bits (packed into bytes)
    packBitsToFile(out, treeBits);

    // Step 8: Write compressed payload using BitWriter
    // BitWriter accumulates bits into a buffer and flushes every 8 bits.
    // This is the core bit-packing loop using << and | operators.
    BitWriter writer(out);
    for (unsigned char c : data)
        writer.writeCode(codeTable.at(c));
    writer.finalize();   // flush any remaining bits with zero-padding

    out.close();

    // Step 9: Gather stats
    // Get file size by seeking to end
    std::ifstream checkSize(outputFile, std::ios::binary | std::ios::ate);
    uint64_t compressedSize = checkSize.tellg();
    checkSize.close();

    Stats stats;
    stats.originalBytes   = data.size();
    stats.compressedBytes = compressedSize;
    stats.compressionRatio =
        static_cast<double>(stats.originalBytes) / static_cast<double>(stats.compressedBytes);
    stats.spaceSavings =
        100.0 * (1.0 - static_cast<double>(stats.compressedBytes) /
                        static_cast<double>(stats.originalBytes));

    return stats;
}


// =====================================================
//  DECOMPRESS
// =====================================================
void decompress(const std::string& inputFile, const std::string& outputFile) {

    std::ifstream in(inputFile, std::ios::binary);
    if (!in) throw std::runtime_error("Cannot open compressed file: " + inputFile);

    // Validate magic
    char magic[4];
    in.read(magic, 4);
    if (std::memcmp(magic, MAGIC, 4) != 0)
        throw std::runtime_error("Not a valid .huf file (bad magic bytes)");

    // Read header
    /* padding */ static_cast<void>(in.get()); // reserved for future use
    uint64_t totalBits  = readU64(in);
    uint32_t leafCount  = readU32(in);

    std::vector<unsigned char> leaves(leafCount);
    for (uint32_t i = 0; i < leafCount; ++i)
        leaves[i] = static_cast<unsigned char>(in.get());

    uint32_t treeBitCount  = readU32(in);
    uint32_t treeByteCount = (treeBitCount + 7) / 8;

    // Rebuild Huffman Tree from header
    std::string treeBits = unpackBitsFromFile(in, treeByteCount, treeBitCount);

    HuffmanTree tree;
    if (leafCount == 0) {
        // Empty original file — nothing to decode. Create empty output and return.
        std::ofstream outEmpty(outputFile, std::ios::binary);
        outEmpty.close();
        in.close();
        return;
    }
    tree.deserialise(treeBits, leaves);

    // Decompress: walk tree bit-by-bit
    // BitReader enforces totalBits so we never decode padding bits.
    std::ofstream out(outputFile, std::ios::binary);
    if (!out) throw std::runtime_error("Cannot open output: " + outputFile);

    BitReader reader(in, totalBits);
    HuffmanNode* current = tree.root();

    // Edge case: single unique symbol
    if (!current->left && !current->right) {
        // All bits map to this one symbol
        // each bit = one instance
    }

    while (!reader.done()) {
        int bit = reader.readBit();
        current = (bit == 0) ? current->left : current->right;

        if (!current)
            throw std::runtime_error("Decompress: null node reached - file corrupted");

        if (current->isLeaf) {
            out.put(static_cast<char>(current->ch));
            current = tree.root();   // return to root for next character
        }
    }

    in.close();
    out.close();
}

} // namespace Codec

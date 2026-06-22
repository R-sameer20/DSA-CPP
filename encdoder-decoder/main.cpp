/*
 * HUFFMAN ENCODER / DECODER - CLI Tool
 *
 * Usage:
 *   huffman compress   <input>  <output.huf>
 *   huffman decompress <input.huf> <output>
 *   huffman analyze    <input>
 *
 * DSA Concepts Demonstrated:
 *   - Hash Map      (O(1) frequency counting)
 *   - Min-Heap      (O(log N) greedy tree construction)
 *   - Binary Tree   (Huffman prefix-code tree)
 *   - DFS           (prefix code generation & tree serialisation)
 *   - Bitwise Ops   (<<, |, & for bit-packing)
 *   - File I/O      (binary stream reading/writing)
 */

#include "Codec.h"
#include "HuffmanTree.h"
#include "Bitstream.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

// --- Terminal colours (Windows-safe fallback if not supported) ---
#ifdef _WIN32
  #include <windows.h>
  static void enableColour() {
      HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
      DWORD  m = 0;
      GetConsoleMode(h, &m);
      // ENABLE_VIRTUAL_TERMINAL_PROCESSING = 0x0004
      SetConsoleMode(h, m | 0x0004);
  }
#else
  static void enableColour() {}
#endif

#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define RED     "\033[31m"
#define MAGENTA "\033[35m"
#define DIM     "\033[2m"

// --- Helpers ---

static std::string humanBytes(uint64_t bytes) {
    std::ostringstream ss;
    if (bytes < 1024)
        ss << bytes << " B";
    else if (bytes < 1024 * 1024)
        ss << std::fixed << std::setprecision(2) << bytes / 1024.0 << " KB";
    else
        ss << std::fixed << std::setprecision(2) << bytes / (1024.0 * 1024) << " MB";
    return ss.str();
}

static std::string progressBar(double pct, int width = 30) {
    int filled = static_cast<int>(pct / 100.0 * width);
    std::string bar = "[";
    for (int i = 0; i < width; ++i)
        bar += (i < filled) ? "#" : "-";
    bar += "]";
    return bar;
}

// --- ANALYZE command ---
// Shows frequency table + what the Huffman codes would look like

static void analyze(const std::string& inputFile) {
    std::ifstream in(inputFile, std::ios::binary);
    if (!in) {
        std::cerr << RED "Error: Cannot open file: " << inputFile << RESET "\n";
        return;
    }

    std::vector<unsigned char> data(
        (std::istreambuf_iterator<char>(in)),
         std::istreambuf_iterator<char>());
    in.close();

    if (data.empty()) {
        std::cerr << RED "Error: File is empty.\n" RESET;
        return;
    }

    // Frequency count
    int freqArr[256] = {};
    for (unsigned char c : data) freqArr[c]++;

    std::unordered_map<unsigned char, int> freqTable;
    for (int i = 0; i < 256; ++i)
        if (freqArr[i] > 0)
            freqTable[static_cast<unsigned char>(i)] = freqArr[i];

    // Build tree + generate codes
    HuffmanTree tree;
    tree.build(freqTable);
    auto codes = tree.generateCodes();

    // Sort by frequency descending
    std::vector<std::pair<unsigned char, int>> sorted(freqTable.begin(), freqTable.end());
    std::sort(sorted.begin(), sorted.end(),
              [](const std::pair<unsigned char, int>& a, const std::pair<unsigned char, int>& b){ 
                  return a.second > b.second; 
              });

    uint64_t originalBits  = static_cast<uint64_t>(data.size()) * 8;
    uint64_t compressedBits = 0;
    for (std::unordered_map<unsigned char, int>::const_iterator it = freqTable.begin(); 
         it != freqTable.end(); ++it)
        compressedBits += static_cast<uint64_t>(it->second) * codes[it->first].size();

    std::cout << "\n" BOLD CYAN "===========================================\n"
              << "  HUFFMAN ANALYSIS  - " << inputFile << "\n"
              << "===========================================\n" RESET;

    std::cout << BOLD "\n  Char   Freq     Original    Huffman     Savings\n" RESET
              << DIM "  ----   ----     --------    -------     -------\n" RESET;

    for (std::vector<std::pair<unsigned char, int>>::const_iterator it = sorted.begin();
         it != sorted.end(); ++it) {
        unsigned char ch = it->first;
        int freq = it->second;
        std::string display;
        if      (ch == '\n') display = "\\n";
        else if (ch == '\t') display = "\\t";
        else if (ch == ' ')  display = "SP";
        else                 display = std::string(1, static_cast<char>(ch));

        uint64_t origBits  = static_cast<uint64_t>(freq) * 8;
        uint64_t huffBits  = static_cast<uint64_t>(freq) * codes[ch].size();
        double   saved     = 100.0 * (1.0 - static_cast<double>(huffBits) /
                                             static_cast<double>(origBits));

        std::cout << "  " << std::setw(4) << std::left  << display
                  << "   " << std::setw(6) << std::right << freq
                  << "   " << std::setw(4) << 8 << " bits"
                  << "   " << std::setw(2) << codes[ch].size() << " bits   "
                  << YELLOW << std::fixed << std::setprecision(1) << saved << "%" RESET
                  << "  " << DIM << codes[ch] << RESET "\n";
    }

    double savings = 100.0 * (1.0 - static_cast<double>(compressedBits) /
                                     static_cast<double>(originalBits));
    std::cout << "\n" BOLD
              << "  Original  : " << GREEN << originalBits  << " bits" RESET "\n"
              << BOLD "  Huffman   : " GREEN << compressedBits << " bits" RESET "\n"
              << BOLD "  Savings   : " MAGENTA << std::fixed << std::setprecision(2)
                      << savings << "%" RESET "\n\n";

    // Visual bar
    std::cout << "  " << progressBar(savings) << " " << MAGENTA
              << std::fixed << std::setprecision(1) << savings << "%" RESET "\n\n";
}

// --- MAIN ---

static void printUsage(const char* prog) {
    std::cout << "\n" BOLD "Usage:\n" RESET
              << "  " << prog << " compress   <input_file>    <output.huf>\n"
              << "  " << prog << " decompress <input.huf>     <output_file>\n"
              << "  " << prog << " analyze    <input_file>\n\n"
              << BOLD "Examples:\n" RESET
              << "  " << prog << " compress   readme.txt      readme.huf\n"
              << "  " << prog << " decompress readme.huf      readme_restored.txt\n"
              << "  " << prog << " analyze    readme.txt\n\n";
}

int main(int argc, char* argv[]) {
    enableColour();

    std::cout << BOLD CYAN
              << "\n  ===========================\n"
              << "  = Huffman Encoder/Decoder =\n"
              << "  ===========================\n\n" RESET;

    if (argc < 3) {
        printUsage(argv[0]);
        return 1;
    }

    std::string command = argv[1];

    try {
        if (command == "compress") {
            if (argc < 4) { printUsage(argv[0]); return 1; }

            std::string inputFile  = argv[2];
            std::string outputFile = argv[3];

            std::cout << "  " BOLD "Compressing: " RESET << inputFile
                      << "  -> " CYAN << outputFile << RESET "\n";
            std::cout << "  " DIM "Please wait..." RESET "\n\n";

            auto stats = Codec::compress(inputFile, outputFile);

            std::cout << "  " GREEN "OK Compression complete!\n\n" RESET
                      << "  " BOLD "Original size  : " RESET
                      << GREEN << humanBytes(stats.originalBytes)   << RESET "\n"
                      << "  " BOLD "Compressed size: " RESET
                      << CYAN  << humanBytes(stats.compressedBytes) << RESET "\n"
                      << "  " BOLD "Ratio          : " RESET
                      << YELLOW << std::fixed << std::setprecision(2)
                                << stats.compressionRatio << "x" RESET "\n"
                      << "  " BOLD "Space saved    : " RESET
                      << MAGENTA << std::fixed << std::setprecision(2)
                                 << stats.spaceSavings << "%" RESET "\n\n"
                      << "  " << progressBar(std::max(0.0, stats.spaceSavings))
                      << " " MAGENTA << std::fixed << std::setprecision(1)
                                     << stats.spaceSavings << "%" RESET "\n\n";

        } else if (command == "decompress") {
            if (argc < 4) { printUsage(argv[0]); return 1; }

            std::string inputFile  = argv[2];
            std::string outputFile = argv[3];

            std::cout << "  " BOLD "Decompressing: " RESET << inputFile
                      << "  -> " CYAN << outputFile << RESET "\n";
            std::cout << "  " DIM "Please wait..." RESET "\n\n";

            Codec::decompress(inputFile, outputFile);

            std::cout << "  " GREEN "OK Decompression complete!\n" RESET
                      << "  Output written to: " CYAN << outputFile << RESET "\n\n";

        } else if (command == "analyze") {
            analyze(argv[2]);

        } else {
            std::cerr << RED "  Error: Unknown command '" << command << "'\n" RESET;
            printUsage(argv[0]);
            return 1;
        }

    } catch (const std::exception& e) {
        std::cerr << "\n  " RED BOLD "Error: " RESET RED << e.what() << RESET "\n\n";
        return 1;
    }

    return 0;
}

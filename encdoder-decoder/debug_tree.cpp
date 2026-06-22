#include "HuffmanTree.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <cstring>

static uint64_t readU64(std::ifstream& in) {
    uint64_t val = 0;
    for (int i = 0; i < 8; ++i) {
        int b = in.get(); if (b == EOF) throw std::runtime_error("EOF");
        val |= (static_cast<uint64_t>(b) << (8 * i));
    }
    return val;
}

static uint32_t readU32(std::ifstream& in) {
    uint32_t val = 0;
    for (int i = 0; i < 4; ++i) {
        int b = in.get(); if (b == EOF) throw std::runtime_error("EOF");
        val |= (static_cast<uint32_t>(b) << (8 * i));
    }
    return val;
}

static std::string unpackBitsFromFile(std::ifstream& in, uint32_t byteCount, uint32_t bitCount) {
    std::string bits; bits.reserve(byteCount*8);
    for (uint32_t i=0;i<byteCount;++i) {
        int b = in.get(); if (b==EOF) throw std::runtime_error("EOF");
        for (int bit=7; bit>=0; --bit) bits += (char)('0' + ((b>>bit)&1));
    }
    bits.resize(bitCount);
    return bits;
}

int main(int argc, char** argv) {
    if (argc < 2) { std::cerr<<"Usage: debug_tree <file.huf>\n"; return 1; }
    std::ifstream in(argv[1], std::ios::binary);
    if (!in) { std::cerr<<"Cannot open file\n"; return 1; }
    char magic[4]; in.read(magic,4);
    std::cout<<"Magic: "<<magic[0]<<magic[1]<<magic[2]<<" (0x"<<std::hex<<(int)(unsigned char)magic[3]<<")\n";
    int padding = in.get();
    uint64_t totalBits = readU64(in);
    uint32_t leafCount = readU32(in);
    std::cout<<"padding="<<padding<<" totalBits="<<totalBits<<" leafCount="<<leafCount<<"\n";
    std::vector<unsigned char> leaves(leafCount);
    for (uint32_t i=0;i<leafCount;++i) leaves[i] = static_cast<unsigned char>(in.get());
    uint32_t treeBitCount = readU32(in);
    uint32_t treeByteCount = (treeBitCount+7)/8;
    std::string treeBits = unpackBitsFromFile(in, treeByteCount, treeBitCount);

    HuffmanTree tree;
    tree.deserialise(treeBits, leaves);
    auto codes = tree.generateCodes();
    std::cout<<"Codes (from deserialised tree):\n";
    for (auto &p : codes) {
        unsigned char c = p.first;
        std::string disp = (c=='\n'?"\\n": (c=='\t'?"\\t" : std::string(1,(char)c)));
        std::cout<<disp<<" -> "<<p.second<<"\n";
    }
    return 0;
}

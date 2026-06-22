#pragma once
#include <string>
#include <cstdint>

// ─────────────────────────────────────────────────────────────
//  Codec  –  high-level compress / decompress interface
//
//  File Format (.huf):
//  ┌──────────────────────────────────────────┐
//  │  Magic bytes  : "HUF\x01"  (4 bytes)    │
//  │  Padding bits : uint8_t    (1 byte)      │
//  │  Total bits   : uint64_t   (8 bytes LE)  │
//  │  Leaf count   : uint32_t   (4 bytes LE)  │
//  │  Leaf bytes   : N bytes (the chars)      │
//  │  Tree bits len: uint32_t   (4 bytes LE)  │
//  │  Tree bits    : packed bytes             │
//  │  Compressed   : payload bytes            │
//  └──────────────────────────────────────────┘
// ─────────────────────────────────────────────────────────────
namespace Codec {

    struct Stats {
        uint64_t originalBytes    = 0;
        uint64_t compressedBytes  = 0;
        double   compressionRatio = 0.0;   // originalBytes / compressedBytes
        double   spaceSavings     = 0.0;   // percentage saved
    };

    // Compress inputFile → outputFile (.huf)
    Stats compress(const std::string& inputFile, const std::string& outputFile);

    // Decompress inputFile (.huf) → outputFile
    void  decompress(const std::string& inputFile, const std::string& outputFile);

} // namespace Codec
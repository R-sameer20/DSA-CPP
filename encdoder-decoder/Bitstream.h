#pragma once
#include <fstream>
#include <cstdint>
#include <stdexcept>

// ─────────────────────────────────────────────────────────────
//  BitWriter  –  packs individual bits into bytes and flushes
//                to an ofstream.
//
//  Internal state:
//    buffer_   : uint8_t accumulator, filled MSB-first
//    bitCount_ : how many bits are currently in buffer_
// ─────────────────────────────────────────────────────────────
class BitWriter {
public:
    explicit BitWriter(std::ofstream& out) : out_(out), buffer_(0), bitCount_(0) {}

    // Write a single bit (0 or 1)
    void writeBit(int bit) {
        buffer_ = static_cast<uint8_t>((buffer_ << 1) | (bit & 1));
        ++bitCount_;
        if (bitCount_ == 8) flush();
    }

    // Write every bit in a code string like "110"
    void writeCode(const std::string& code) {
        for (char c : code) writeBit(c - '0');
    }

    // Flush remaining bits (pad with zeros to complete the last byte)
    // Returns how many padding bits were added (0-7) so the decoder knows.
    uint8_t finalize() {
        uint8_t padding = 0;
        if (bitCount_ > 0) {
            padding = static_cast<uint8_t>(8 - bitCount_);
            buffer_ = static_cast<uint8_t>(buffer_ << padding);
            flush();
        }
        return padding;
    }

    uint64_t totalBitsWritten() const { return totalBits_; }

private:
    std::ofstream& out_;
    uint8_t        buffer_;
    int            bitCount_;
    uint64_t       totalBits_ = 0;

    void flush() {
        out_.put(static_cast<char>(buffer_));
        totalBits_ += bitCount_;
        buffer_    = 0;
        bitCount_  = 0;
    }
};

// ─────────────────────────────────────────────────────────────
//  BitReader  –  reads an ifstream one bit at a time.
// ─────────────────────────────────────────────────────────────
class BitReader {
public:
    BitReader(std::ifstream& in, uint64_t totalBits)
        : in_(in), buffer_(0), bitCount_(0), totalBits_(totalBits), bitsRead_(0) {}

    // Returns 0 or 1; throws if no more bits available
    int readBit() {
        if (bitsRead_ >= totalBits_)
            throw std::runtime_error("BitReader: read past end of bit-stream");
        if (bitCount_ == 0) {
            int byte = in_.get();
            if (byte == EOF)
                throw std::runtime_error("BitReader: unexpected EOF in stream");
            buffer_   = static_cast<uint8_t>(byte);
            bitCount_ = 8;
        }
        ++bitsRead_;
        --bitCount_;
        return (buffer_ >> bitCount_) & 1;
    }

    bool done() const { return bitsRead_ >= totalBits_; }

private:
    std::ifstream& in_;
    uint8_t        buffer_;
    int            bitCount_;
    uint64_t       totalBits_;
    uint64_t       bitsRead_;
};
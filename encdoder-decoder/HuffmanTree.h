#pragma once
#include <string>
#include <unordered_map>
#include <queue>
#include <vector>
#include <memory>

// ─────────────────────────────────────────────
//  NODE  – the building block of the Huffman Tree
// ─────────────────────────────────────────────
struct HuffmanNode {
    unsigned char  ch;          // character (valid only at leaf nodes)
    int            freq;        // frequency / combined weight
    bool           isLeaf;
    HuffmanNode*   left;
    HuffmanNode*   right;

    // Leaf constructor
    HuffmanNode(unsigned char c, int f)
        : ch(c), freq(f), isLeaf(true), left(nullptr), right(nullptr) {}

    // Internal node constructor
    HuffmanNode(int f, HuffmanNode* l, HuffmanNode* r)
        : ch(0), freq(f), isLeaf(false), left(l), right(r) {}
};

// ─────────────────────────────────────────────
//  COMPARATOR for the Min-Heap (priority_queue)
// ─────────────────────────────────────────────
struct NodeCompare {
    bool operator()(const HuffmanNode* a, const HuffmanNode* b) const {
        // Min-heap: lower frequency = higher priority
        if (a->freq != b->freq) return a->freq > b->freq;
        // Tie-break by character value for deterministic output
        return a->ch > b->ch;
    }
};

// ─────────────────────────────────────────────
//  HUFFMAN TREE  – builds & owns the tree
// ─────────────────────────────────────────────
class HuffmanTree {
public:
    HuffmanTree() : root_(nullptr) {}
    ~HuffmanTree() { destroy(root_); }

    // Disable copy; allow move
    HuffmanTree(const HuffmanTree&)            = delete;
    HuffmanTree& operator=(const HuffmanTree&) = delete;
    HuffmanTree(HuffmanTree&& o) noexcept : root_(o.root_) { o.root_ = nullptr; }

    // Build tree from a frequency table
    void build(const std::unordered_map<unsigned char, int>& freqTable);

    // Generate prefix code table via DFS
    std::unordered_map<unsigned char, std::string> generateCodes() const;

    // Serialise tree structure into a bit-string (for file header)
    // Also fills `leaves` with the ordered leaf bytes.
    std::string serialise(std::vector<unsigned char>& leaves) const;

    // Rebuild tree from serialised bit-string + leaf list
    void deserialise(const std::string& bits, const std::vector<unsigned char>& leaves);

    HuffmanNode* root() const { return root_; }

private:
    HuffmanNode* root_;

    void destroy(HuffmanNode* node);
    void dfsCode(HuffmanNode* node, const std::string& path,
                 std::unordered_map<unsigned char, std::string>& table) const;
    void serialiseNode(HuffmanNode* node, std::string& bits,
                       std::vector<unsigned char>& leaves) const;

    // Deserialise helper – returns next node, advances index
    HuffmanNode* deserialiseNode(const std::string& bits, size_t& idx,
                                  const std::vector<unsigned char>& leaves, size_t& leafIdx);
};
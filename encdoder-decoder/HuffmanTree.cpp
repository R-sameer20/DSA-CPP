#include "HuffmanTree.h"
#include <stdexcept>

// --- DESTRUCTOR ---
void HuffmanTree::destroy(HuffmanNode* node) {
    if (!node) return;
    destroy(node->left);
    destroy(node->right);
    delete node;
}

// --- BUILD ---
// Phase 1: Create one leaf per unique character and push into Min-Heap.
// Phase 2: Greedily merge the two lowest-frequency nodes until one root remains.
//
// Time:  O(N log N)  where N = number of unique characters
// Space: O(N)
void HuffmanTree::build(const std::unordered_map<unsigned char, int>& freqTable) {
    if (freqTable.empty())
        throw std::runtime_error("HuffmanTree::build - frequency table is empty");

    // Phase 1: seed the min-heap (Priority Queue)
    std::priority_queue<HuffmanNode*, std::vector<HuffmanNode*>, NodeCompare> minHeap;

    for (std::unordered_map<unsigned char, int>::const_iterator it = freqTable.begin();
         it != freqTable.end(); ++it)
        minHeap.push(new HuffmanNode(it->first, it->second));

    // Edge-case: single unique character
    if (minHeap.size() == 1) {
        HuffmanNode* only = minHeap.top(); minHeap.pop();
        // Wrap it so it has a left child (the encoder path will be "0")
        root_ = new HuffmanNode(only->freq, only, nullptr);
        return;
    }

    // Phase 2: merge until one root remains
    while (minHeap.size() > 1) {
        HuffmanNode* lo = minHeap.top(); minHeap.pop();   // smallest
        HuffmanNode* hi = minHeap.top(); minHeap.pop();   // second-smallest

        HuffmanNode* parent = new HuffmanNode(lo->freq + hi->freq, lo, hi);
        minHeap.push(parent);
    }

    root_ = minHeap.top();
}

// --- GENERATE CODES ---
// DFS from root: go left -> append '0', go right -> append '1'.
// When a leaf is reached, record the accumulated path string.
//
// Time:  O(N)
std::unordered_map<unsigned char, std::string> HuffmanTree::generateCodes() const {
    if (!root_) throw std::runtime_error("HuffmanTree::generateCodes - tree not built");

    std::unordered_map<unsigned char, std::string> table;
    dfsCode(root_, "", table);
    return table;
}

void HuffmanTree::dfsCode(HuffmanNode* node, const std::string& path,
                           std::unordered_map<unsigned char, std::string>& table) const {
    if (!node) return;

    if (node->isLeaf) {
        // Assign at least "0" for single-symbol edge-case
        table[node->ch] = path.empty() ? "0" : path;
        return;
    }

    dfsCode(node->left,  path + '0', table);
    dfsCode(node->right, path + '1', table);
}

// --- SERIALISE ---
// Encodes the tree structure as a bit string using a pre-order traversal:
//   Internal node -> write '0'
//   Leaf node     -> write '1', then record the character in a separate list
//
// The character list (leaves) is stored separately in the file header
// so the decoder can pair bits with characters.
//
// This costs O(N) bits for the structure + N leaf bytes.
std::string HuffmanTree::serialise(std::vector<unsigned char>& leaves) const {
    if (!root_) throw std::runtime_error("HuffmanTree::serialise - tree not built");
    std::string bits;
    serialiseNode(root_, bits, leaves);
    return bits;
}

void HuffmanTree::serialiseNode(HuffmanNode* node, std::string& bits,
                                 std::vector<unsigned char>& leaves) const {
    if (!node) return;
    if (node->isLeaf) {
        bits += '1';
        leaves.push_back(node->ch);
        return;
    }
    bits += '0';
    serialiseNode(node->left,  bits, leaves);
    serialiseNode(node->right, bits, leaves);
}

// --- DESERIALISE ---
// Rebuilds the tree from the pre-order bit-string + ordered leaf list.
void HuffmanTree::deserialise(const std::string& bits,
                               const std::vector<unsigned char>& leaves) {
    destroy(root_);
    root_ = nullptr;
    size_t idx = 0, leafIdx = 0;
    root_ = deserialiseNode(bits, idx, leaves, leafIdx);
}

HuffmanNode* HuffmanTree::deserialiseNode(const std::string& bits, size_t& idx,
                                           const std::vector<unsigned char>& leaves,
                                           size_t& leafIdx) {
    if (idx >= bits.size())
        throw std::runtime_error("HuffmanTree::deserialise - bit-string truncated");

    char bit = bits[idx++];
    if (bit == '1') {
        // Leaf
        if (leafIdx >= leaves.size())
            throw std::runtime_error("HuffmanTree::deserialise - leaf list exhausted");
        return new HuffmanNode(leaves[leafIdx++], 0);
    }
    // Internal node
    HuffmanNode* left  = deserialiseNode(bits, idx, leaves, leafIdx);
    HuffmanNode* right = deserialiseNode(bits, idx, leaves, leafIdx);
    return new HuffmanNode(0, left, right);
}

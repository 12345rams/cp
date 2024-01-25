#include <vector>
#include <algorithm>

class Node {
public:
    Node* link[2];
    bool contains(int ch) {
        return link[ch] != nullptr;
    }

    void put(int ch, Node* node) {
        link[ch] = node;
    }

    Node* get(int ch) {
        return link[ch];
    }
};

class Trie {
public:
    Node* root;

    Trie() {
        root = new Node();
    }

    void insert(int x) {
        Node* node = root;
        for (int i = 31; i >= 0; i--) {
            int bit = (x >> i) & 1;
            if (!node->contains(bit)) {
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }

    int maxXor(int x) {
        Node* node = root;
        int result = 0;
        for (int i = 31; i >= 0; i--) {
            int bit = (x >> i) & 1;
            int complement = 1 - bit;
            if (node->contains(complement)) {
                result |= (1 << i);
                node = node->get(complement);
            } else {
                node = node->get(bit);
            }
        }
        return result;
    }
};

class Solution {
public:
    int findMaximumXOR(std::vector<int>& nums) {
        Trie tree;
        for (int i = 0; i < nums.size(); i++) {
            tree.insert(nums[i]);
        }
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            maxi = std::max(maxi, tree.maxXor(nums[i]));
        }
        return maxi;
    }
};

#include <climits>

#include "data_structures.h"

using namespace leetcode;

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        if (!root->left && !root->right) {
            return 1;
        }
        int min_depth = INT_MAX;
        if (root->left) {
            min_depth = std::min(min_depth, minDepth(root->left));
        }
        if (root->right) {
            min_depth = std::min(min_depth, minDepth(root->right));
        }
        return min_depth + 1;
    }
};
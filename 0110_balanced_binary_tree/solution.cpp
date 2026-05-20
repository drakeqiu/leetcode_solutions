#include "data_structures.h"
#include <algorithm>

using namespace leetcode;

class Solution {
public:
    int height(TreeNode* node) {
        if (!node) {
            return 0;
        }
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return std::max(leftHeight, rightHeight) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if (!root) {
            return true;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        if (std::abs(leftHeight - rightHeight) <= 1) {
            return isBalanced(root->left) && isBalanced(root->right);
        }
        return false;
    }
};
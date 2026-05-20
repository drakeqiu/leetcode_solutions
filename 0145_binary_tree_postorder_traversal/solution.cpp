#include <stack>
#include <vector>

#include "data_structures.h"

using namespace leetcode;
using namespace std;

class Solution {
public:
    // 递归版本
    void postorderRecursive(TreeNode* node, vector<int>& result) {
        if (!node) {
            return;
        }
        postorderRecursive(node->left, result);
        postorderRecursive(node->right, result);
        result.push_back(node->val);
    }

    vector<int> postorderTraversalRecursive(TreeNode* root) {
        vector<int> result;
        postorderRecursive(root, result);
        return result;
    }

    // 迭代版本（使用栈）
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if (!root) {
            return result;
        }
        stack<TreeNode*> stk;
        TreeNode* prev = nullptr;  // 记录上一个访问的节点
        stk.push(root);
        while (!stk.empty()) {
            TreeNode* node = stk.top();
            // 如果当前节点没有子节点，或者子节点已经被访问过了
            if ((!node->left && !node->right) ||
                (prev && (prev == node->left || prev == node->right))) {
                result.push_back(node->val);
                stk.pop();
                prev = node;  // 更新上一个访问的节点
            } else {
                // 先入右子节点，再入左子节点（因为栈是后进先出）
                if (node->right) {
                    stk.push(node->right);
                }
                if (node->left) {
                    stk.push(node->left);
                }
            }
        }
        return result;
    }
};

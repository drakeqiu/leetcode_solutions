#include <stack>
#include <vector>

#include "data_structures.h"

using namespace leetcode;
using namespace std;

class Solution {
public:
    // 递归版本
    void preorder(TreeNode* node, vector<int>& result) {
        if (!node) {
            return;
        }
        result.push_back(node->val);
        preorder(node->left, result);
        preorder(node->right, result);
    }

    // 迭代版本（使用栈）
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if (!root) {
            return result;
        }

        stack<TreeNode*> stk;
        stk.push(root);

        while (!stk.empty()) {
            TreeNode* node = stk.top();
            stk.pop();
            result.push_back(node->val);

            // 先入右子节点，再入左子节点（因为栈是后进先出）
            if (node->right) {
                stk.push(node->right);
            }
            if (node->left) {
                stk.push(node->left);
            }
        }

        return result;
    }
};
#include <stack>
#include <vector>

#include "data_structures.h"

using namespace leetcode;
using namespace std;

class Solution {
public:
    // 递归版本
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        traverse(root, res);
        return res;
    }

    // 迭代版本（使用栈）
    vector<int> inorderTraversalIterative(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> stk;
        TreeNode* current = root;

        while (current != nullptr || !stk.empty()) {
            // 一直向左走，将沿途节点压入栈
            while (current != nullptr) {
                stk.push(current);
                current = current->left;
            }

            // 弹出栈顶节点并访问
            current = stk.top();
            stk.pop();
            result.push_back(current->val);

            // 转向右子树
            current = current->right;
        }

        return result;
    }

private:
    void traverse(TreeNode* node, vector<int>& res) {
        if (node) {
            traverse(node->left, res);
            res.push_back(node->val);
            traverse(node->right, res);
        }
    }
};

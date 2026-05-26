#include "../common/data_structures.h"

using namespace leetcode;

class Solution {
public:
    /**
     * 合并两棵二叉树
     *
     * @param root1 第一棵树的根节点
     * @param root2 第二棵树的根节点
     * @return 合并后的新树
     *
     * 算法思路：
     * - 递归合并两棵树
     * - 如果两个节点都为空，返回 nullptr
     * - 否则创建新节点，值为两节点值之和（空节点视为0）
     * - 递归处理左右子树
     *
     * 时间复杂度：O(n)，n 是节点数
     * 空间复杂度：O(h)，h 是树高
     */
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2)
            return nullptr;

        int val = (root1 ? root1->val : 0) + (root2 ? root2->val : 0);
        TreeNode* node = new TreeNode(val);
        node->left = mergeTrees(root1 ? root1->left : nullptr, root2 ? root2->left : nullptr);
        node->right = mergeTrees(root1 ? root1->right : nullptr, root2 ? root2->right : nullptr);

        return node;
    }
};

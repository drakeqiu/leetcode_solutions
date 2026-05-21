#include "solution.cpp"

#include <gtest/gtest.h>

using namespace leetcode;

TEST(SymmetricTree, Example1) {
    Solution solution;
    TreeNode* root = new TreeNode(1,
        new TreeNode(2,
            new TreeNode(3),
            new TreeNode(4)),
        new TreeNode(2,
            new TreeNode(4),
            new TreeNode(3)));
    EXPECT_TRUE(solution.isSymmetric(root));
}

TEST(SymmetricTree, Example2) {
    Solution solution;
    TreeNode* root = new TreeNode(1,
        new TreeNode(2, nullptr, new TreeNode(3)),
        new TreeNode(2, nullptr, new TreeNode(3)));
    EXPECT_FALSE(solution.isSymmetric(root));
}

TEST(SymmetricTree, EmptyTree) {
    Solution solution;
    TreeNode* root = nullptr;
    EXPECT_TRUE(solution.isSymmetric(root));
}

TEST(SymmetricTree, SingleNode) {
    Solution solution;
    TreeNode* root = new TreeNode(1);
    EXPECT_TRUE(solution.isSymmetric(root));
}

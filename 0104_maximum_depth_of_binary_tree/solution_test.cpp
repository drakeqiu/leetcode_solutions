#include "solution.cpp"

#include <gtest/gtest.h>

using namespace leetcode;

TEST(MaximumDepthOfBinaryTree, Example1) {
    Solution solution;
    TreeNode* root =
        new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
    EXPECT_EQ(solution.maxDepth(root), 3);
}

TEST(MaximumDepthOfBinaryTree, Example2) {
    Solution solution;
    TreeNode* root = new TreeNode(1, nullptr, new TreeNode(2));
    EXPECT_EQ(solution.maxDepth(root), 2);
}

TEST(MaximumDepthOfBinaryTree, EmptyTree) {
    Solution solution;
    TreeNode* root = nullptr;
    EXPECT_EQ(solution.maxDepth(root), 0);
}

TEST(MaximumDepthOfBinaryTree, SingleNode) {
    Solution solution;
    TreeNode* root = new TreeNode(1);
    EXPECT_EQ(solution.maxDepth(root), 1);
}

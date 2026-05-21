#include "solution.cpp"

#include <gtest/gtest.h>

using namespace leetcode;

TEST(SameTree, Example1) {
    Solution solution;
    TreeNode* p = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    TreeNode* q = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    EXPECT_TRUE(solution.isSameTree(p, q));
}

TEST(SameTree, Example2) {
    Solution solution;
    TreeNode* p = new TreeNode(1, new TreeNode(2), nullptr);
    TreeNode* q = new TreeNode(1, nullptr, new TreeNode(2));
    EXPECT_FALSE(solution.isSameTree(p, q));
}

TEST(SameTree, Example3) {
    Solution solution;
    TreeNode* p = new TreeNode(1, new TreeNode(2), new TreeNode(1));
    TreeNode* q = new TreeNode(1, new TreeNode(1), new TreeNode(2));
    EXPECT_FALSE(solution.isSameTree(p, q));
}

TEST(SameTree, BothEmpty) {
    Solution solution;
    TreeNode* p = nullptr;
    TreeNode* q = nullptr;
    EXPECT_TRUE(solution.isSameTree(p, q));
}

TEST(SameTree, OneEmpty) {
    Solution solution;
    TreeNode* p = new TreeNode(1);
    TreeNode* q = nullptr;
    EXPECT_FALSE(solution.isSameTree(p, q));
}

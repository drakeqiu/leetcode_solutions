#include "solution.cpp"
#include "test_utils.h"

#include <gtest/gtest.h>
#include <optional>

using namespace leetcode;

TEST(InvertBinaryTree, Example1) {
    Solution solution;
    std::vector<std::optional<int>> input = {4, 2, 7, 1, 3, 6, 9};
    std::vector<std::optional<int>> expected = {4, 7, 2, 9, 6, 3, 1};

    TreeNode* root = createTree(input);
    TreeNode* result = solution.invertTree(root);

    EXPECT_EQ(treeToVector(result), expected);

    deleteTree(root);
}

TEST(InvertBinaryTree, Example2) {
    Solution solution;
    std::vector<std::optional<int>> input = {2, 1, 3};
    std::vector<std::optional<int>> expected = {2, 3, 1};

    TreeNode* root = createTree(input);
    TreeNode* result = solution.invertTree(root);

    EXPECT_EQ(treeToVector(result), expected);

    deleteTree(root);
}

TEST(InvertBinaryTree, Example3) {
    Solution solution;
    std::vector<std::optional<int>> input = {};
    std::vector<std::optional<int>> expected = {};

    TreeNode* root = createTree(input);
    TreeNode* result = solution.invertTree(root);

    EXPECT_EQ(treeToVector(result), expected);

    deleteTree(root);
}

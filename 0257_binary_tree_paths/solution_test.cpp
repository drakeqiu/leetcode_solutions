#include "solution.cpp"

#include <gtest/gtest.h>

#include <optional>
#include <vector>

#include "test_utils.h"

using namespace leetcode;

TEST(BinaryTreePaths, Example1) {
    Solution solution;
    std::vector<std::optional<int>> input = {1, 2, 3, nullopt, 5};
    std::vector<std::string> expected = {"1->2->5", "1->3"};

    TreeNode* root = createTree(input);
    std::vector<std::string> result = solution.binaryTreePaths(root);

    std::sort(result.begin(), result.end());
    std::sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);

    deleteTree(root);
}

TEST(BinaryTreePaths, Example2) {
    Solution solution;
    std::vector<std::optional<int>> input = {1};
    std::vector<std::string> expected = {"1"};

    TreeNode* root = createTree(input);
    std::vector<std::string> result = solution.binaryTreePaths(root);

    EXPECT_EQ(result, expected);

    deleteTree(root);
}

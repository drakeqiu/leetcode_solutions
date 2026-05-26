#include "solution.cpp"

#include <gtest/gtest.h>

#include "../common/test_utils.h"

using namespace leetcode;

TEST(MergeTwoBinaryTrees, Example1) {
    Solution solution;
    // Tree 1: [1,3,2,5]
    std::vector<int> tree1_values = {1, 3, 2, 5};
    TreeNode* root1 = createTree(tree1_values);
    // Tree 2: [2,1,3,null,4,null,7]
    std::vector<int> tree2_values = {2, 1, 3, -1, 4, -1, 7};
    TreeNode* root2 = createTree(tree2_values);

    TreeNode* merged = solution.mergeTrees(root1, root2);

    // Expected: [3,4,5,5,4,null,7]
    std::vector<int> expected_values = {3, 4, 5, 5, 4, -1, 7};
    TreeNode* expected = createTree(expected_values);
    EXPECT_TRUE(areTreesEqual(merged, expected));

    deleteTree(root1);
    deleteTree(root2);
    deleteTree(merged);
    deleteTree(expected);
}

TEST(MergeTwoBinaryTrees, BothEmpty) {
    Solution solution;
    TreeNode* root1 = nullptr;
    TreeNode* root2 = nullptr;

    TreeNode* merged = solution.mergeTrees(root1, root2);

    EXPECT_EQ(merged, nullptr);
}

TEST(MergeTwoBinaryTrees, OneEmpty) {
    Solution solution;
    // Tree 1: [1]
    std::vector<int> tree1_values = {1};
    TreeNode* root1 = createTree(tree1_values);
    TreeNode* root2 = nullptr;

    TreeNode* merged = solution.mergeTrees(root1, root2);

    std::vector<int> expected_values = {1};
    TreeNode* expected = createTree(expected_values);
    EXPECT_TRUE(areTreesEqual(merged, expected));

    deleteTree(root1);
    deleteTree(merged);
    deleteTree(expected);
}

TEST(MergeTwoBinaryTrees, Example2) {
    Solution solution;
    std::vector<int> tree1_values = {1};
    std::vector<int> tree2_values = {1, 2};
    TreeNode* root1 = createTree(tree1_values);
    TreeNode* root2 = createTree(tree2_values);

    TreeNode* merged = solution.mergeTrees(root1, root2);

    std::vector<int> expected_values = {2, 2};
    TreeNode* expected = createTree(expected_values);
    EXPECT_TRUE(areTreesEqual(merged, expected));

    deleteTree(root1);
    deleteTree(root2);
    deleteTree(merged);
    deleteTree(expected);
}

#include "solution.cpp"

#include <gtest/gtest.h>

// 迭代版本测试
TEST(BinaryTreePreorderTraversal, IterativeExample1) {
    Solution solution;
    // Tree: [1,null,2,3]
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> result = solution.preorderTraversal(root);
    vector<int> expected = {1, 2, 3};
    EXPECT_EQ(result, expected);

    // Clean up
    delete root->right->left;
    delete root->right;
    delete root;
}

TEST(BinaryTreePreorderTraversal, IterativeExample2) {
    Solution solution;
    // Tree: []
    TreeNode* root = nullptr;
    vector<int> result = solution.preorderTraversal(root);
    vector<int> expected = {};
    EXPECT_EQ(result, expected);
}

TEST(BinaryTreePreorderTraversal, IterativeExample3) {
    Solution solution;
    // Tree: [1]
    TreeNode* root = new TreeNode(1);
    vector<int> result = solution.preorderTraversal(root);
    vector<int> expected = {1};
    EXPECT_EQ(result, expected);

    // Clean up
    delete root;
}

TEST(BinaryTreePreorderTraversal, IterativeFullTree) {
    Solution solution;
    // Tree: [1,2,3,4,5,6,7]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vector<int> result = solution.preorderTraversal(root);
    vector<int> expected = {1, 2, 4, 5, 3, 6, 7};
    EXPECT_EQ(result, expected);

    // Clean up
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;
}

TEST(BinaryTreePreorderTraversal, IterativeLeftSkewed) {
    Solution solution;
    // Tree: [1,2,null,3]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    vector<int> result = solution.preorderTraversal(root);
    vector<int> expected = {1, 2, 3};
    EXPECT_EQ(result, expected);

    // Clean up
    delete root->left->left;
    delete root->left;
    delete root;
}

// 递归版本测试
TEST(BinaryTreePreorderTraversalRecursive, Example1) {
    Solution solution;
    // Tree: [1,null,2,3]
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> result = solution.preorderTraversalRecursive(root);
    vector<int> expected = {1, 2, 3};
    EXPECT_EQ(result, expected);

    // Clean up
    delete root->right->left;
    delete root->right;
    delete root;
}

TEST(BinaryTreePreorderTraversalRecursive, Example2) {
    Solution solution;
    // Tree: []
    TreeNode* root = nullptr;
    vector<int> result = solution.preorderTraversalRecursive(root);
    vector<int> expected = {};
    EXPECT_EQ(result, expected);
}

TEST(BinaryTreePreorderTraversalRecursive, Example3) {
    Solution solution;
    // Tree: [1]
    TreeNode* root = new TreeNode(1);
    vector<int> result = solution.preorderTraversalRecursive(root);
    vector<int> expected = {1};
    EXPECT_EQ(result, expected);

    // Clean up
    delete root;
}

TEST(BinaryTreePreorderTraversalRecursive, FullTree) {
    Solution solution;
    // Tree: [1,2,3,4,5,6,7]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vector<int> result = solution.preorderTraversalRecursive(root);
    vector<int> expected = {1, 2, 4, 5, 3, 6, 7};
    EXPECT_EQ(result, expected);

    // Clean up
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;
}

TEST(BinaryTreePreorderTraversalRecursive, LeftSkewed) {
    Solution solution;
    // Tree: [1,2,null,3]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    vector<int> result = solution.preorderTraversalRecursive(root);
    vector<int> expected = {1, 2, 3};
    EXPECT_EQ(result, expected);

    // Clean up
    delete root->left->left;
    delete root->left;
    delete root;
}

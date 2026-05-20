#include "solution.cpp"

#include <gtest/gtest.h>

TEST(MinimumDepthOfBinaryTree, Example1) {
    Solution solution;
    // Tree: [3,9,20,null,null,15,7]
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    EXPECT_EQ(solution.minDepth(root), 2);

    // Clean up
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root->left;
    delete root;
}

TEST(MinimumDepthOfBinaryTree, Example2) {
    Solution solution;
    // Tree: [2,null,3,null,4,null,5,null,6]
    TreeNode* root = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(5);
    root->right->right->right->right = new TreeNode(6);
    EXPECT_EQ(solution.minDepth(root), 5);

    // Clean up
    delete root->right->right->right->right;
    delete root->right->right->right;
    delete root->right->right;
    delete root->right;
    delete root;
}

TEST(MinimumDepthOfBinaryTree, Empty) {
    Solution solution;
    EXPECT_EQ(solution.minDepth(nullptr), 0);
}

TEST(MinimumDepthOfBinaryTree, SingleNode) {
    Solution solution;
    TreeNode* root = new TreeNode(1);
    EXPECT_EQ(solution.minDepth(root), 1);
    delete root;
}

TEST(MinimumDepthOfBinaryTree, LeftSkewed) {
    Solution solution;
    // Tree: [1,2,null,3]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    EXPECT_EQ(solution.minDepth(root), 3);

    // Clean up
    delete root->left->left;
    delete root->left;
    delete root;
}
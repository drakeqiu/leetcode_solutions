#include "solution.cpp"

#include <gtest/gtest.h>

TEST(BalancedBinaryTree, Example1) {
    Solution solution;
    // Tree: [3,9,20,null,null,15,7]
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    EXPECT_TRUE(solution.isBalanced(root));

    // Clean up
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root->left;
    delete root;
}

TEST(BalancedBinaryTree, Example2) {
    Solution solution;
    // Tree: [1,2,2,3,3,null,null,4,4]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(4);
    EXPECT_FALSE(solution.isBalanced(root));

    // Clean up
    delete root->left->left->left;
    delete root->left->left->right;
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;
}

TEST(BalancedBinaryTree, Empty) {
    Solution solution;
    EXPECT_TRUE(solution.isBalanced(nullptr));
}

TEST(BalancedBinaryTree, SingleNode) {
    Solution solution;
    TreeNode* root = new TreeNode(1);
    EXPECT_TRUE(solution.isBalanced(root));
    delete root;
}

TEST(BalancedBinaryTree, LeftHeavy) {
    Solution solution;
    // Tree: [1,2,null,3]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    EXPECT_FALSE(solution.isBalanced(root));

    // Clean up
    delete root->left->left;
    delete root->left;
    delete root;
}
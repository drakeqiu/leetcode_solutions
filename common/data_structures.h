#ifndef LEETCODE_DATA_STRUCTURES_H
#define LEETCODE_DATA_STRUCTURES_H

#include <vector>

namespace leetcode {

// 单链表节点
struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {
    }
    explicit ListNode(int x) : val(x), next(nullptr) {
    }
    ListNode(int x, ListNode* next) : val(x), next(next) {
    }
};

// 二叉树节点
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {
    }
    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {
    }
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {
    }
};

// N叉树节点
struct Node {
    int val;
    std::vector<Node*> children;

    Node() : val(0) {
    }
    explicit Node(int _val) : val(_val) {
    }
    Node(int _val, std::vector<Node*> _children) : val(_val), children(_children) {
    }
};

// 带随机指针的链表节点
struct RandomListNode {
    int val;
    RandomListNode* next;
    RandomListNode* random;

    RandomListNode(int _val) : val(_val), next(nullptr), random(nullptr) {
    }
};

}  // namespace leetcode

#endif  // LEETCODE_DATA_STRUCTURES_H

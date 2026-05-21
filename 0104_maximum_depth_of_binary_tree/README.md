# 104. Maximum Depth of Binary Tree

## 题目描述

Given the `root` of a binary tree, return its maximum depth.

A binary tree's **maximum depth** is the number of nodes along the longest path from the root node down to the farthest leaf node.

**Example 1:**
```
Input: root = [3,9,20,null,null,15,7]
Output: 3
```

**Example 2:**
```
Input: root = [1,null,2]
Output: 2
```

**Constraints:**
- The number of nodes in the tree is in the range `[0, 10^4]`.
- `-100 <= Node.val <= 100`

## 解题思路

使用递归（深度优先搜索）的方法计算二叉树的最大深度。

**算法步骤：**
1. **基准情况**：如果根节点为空（`nullptr`），返回深度 0
2. **递归计算**：
   - 递归计算左子树的深度：`leftDepth = maxDepth(root->left)`
   - 递归计算右子树的深度：`rightDepth = maxDepth(root->right)`
3. **返回结果**：返回 `1 + max(leftDepth, rightDepth)`，其中 1 表示当前节点

**关键点：**
- 递归天然地遍历了所有节点
- 每个节点只被访问一次
- 通过比较左右子树的深度来确定最大深度
- 空树作为递归的终止条件

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是二叉树的节点数。每个节点只被访问一次。
- **空间复杂度**：O(h)，其中 h 是二叉树的高度。空间复杂度主要来自递归调用栈，最坏情况下（树退化为链表）为 O(n)，平均情况下为 O(log n)。

## 相关标签

[树] [深度优先搜索] [广度优先搜索] [二叉树]

## 参考链接

https://leetcode.com/problems/maximum-depth-of-binary-tree/

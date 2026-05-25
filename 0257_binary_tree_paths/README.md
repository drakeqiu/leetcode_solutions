# 257. Binary Tree Paths

## 题目描述

Given the `root` of a binary tree, return all root-to-leaf paths in any order.

A **leaf** is a node with no children.

**Example 1:**
```
Input: root = [1,2,3,null,5]
Output: ["1->2->5","1->3"]
```

**Example 2:**
```
Input: root = [1]
Output: ["1"]
```

**Constraints:**
- The number of nodes in the tree is in the range `[1, 100]`.
- `-100 <= Node.val <= 100`

## 解题思路

使用 DFS 递归遍历二叉树。对于每个节点，将其值添加到当前路径字符串中。如果是叶子节点，将完整路径添加到结果中；如果不是叶子节点，添加 "->" 并继续递归左右子树。

## 复杂度分析

- 时间复杂度：O(n²)，其中 n 是节点数（每个节点访问一次，字符串拼接需要 O(n)）
- 空间复杂度：O(n)，递归栈深度和路径存储

## 相关标签

[树] [深度优先搜索] [字符串] [回溯]

## 参考链接

https://leetcode.com/problems/binary-tree-paths/

# 226. Invert Binary Tree

## 题目描述

Given the `root` of a binary tree, invert the tree, and return its root.

**Example 1:**
```
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]
```

**Example 2:**
```
Input: root = [2,1,3]
Output: [2,3,1]
```

**Example 3:**
```
Input: root = []
Output: []
```

**Constraints:**
- The number of nodes in the tree is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`

## 解题思路

使用递归方法：对于每个节点，先递归翻转其左右子树，然后交换左右子树的位置。

## 复杂度分析

- 时间复杂度：O(n)，其中 n 是树中节点的数量
- 空间复杂度：O(h)，其中 h 是树的高度，最坏情况 O(n)，平均情况 O(log n)

## 相关标签

[树] [递归] [深度优先搜索] [广度优先搜索]

## 参考链接

https://leetcode.com/problems/invert-binary-tree/

# 110. Balanced Binary Tree

## 题目描述

Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

> a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

**Example 1:**
```
Input: root = [3,9,20,null,null,15,7]
Output: true
```

**Example 2:**
```
Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
```

**Constraints:**
- The number of nodes in the tree is in the range `[0, 5000]`.
- `-10^4 <= Node.val <= 10^4`

## 解题思路

使用自顶向下的递归方法判断二叉树是否平衡。

**算法步骤：**
1. 定义辅助函数 `height(node)` 计算节点的高度：
   - 如果节点为空，返回 0
   - 递归计算左右子树的高度
   - 返回 max(左高度, 右高度) + 1

2. 在 `isBalanced(root)` 中：
   - 如果根节点为空，返回 true
   - 计算左右子树的高度
   - 检查高度差是否 <= 1
   - 如果平衡，递归检查左右子树是否都平衡
   - 如果不平衡，返回 false

**关键点：**
- 需要同时满足当前节点平衡和所有子节点平衡
- 高度差的绝对值使用 `std::abs` 计算
- 空树和单节点树都是平衡的

## 复杂度分析

- **时间复杂度**：O(n²)，其中 n 是节点数
  - 对于每个节点，都需要计算其左右子树的高度
  - 计算高度本身是 O(n) 操作，导致总体复杂度为 O(n²)
- **空间复杂度**：O(h)，其中 h 是树的高度（递归栈深度）
  - 最坏情况下（树退化为链表），空间复杂度为 O(n)

**优化建议**：可以使用自底向上（后序遍历）的方法，在计算高度的同时检查平衡性，将时间复杂度优化到 O(n)。

## 相关标签

[树] [深度优先搜索] [二叉树]

## 参考链接

https://leetcode.com/problems/balanced-binary-tree/
# 111. Minimum Depth of Binary Tree

## 题目描述

Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

**Note:** A leaf is a node with no children.

**Example 1:**
```
Input: root = [3,9,20,null,null,15,7]
Output: 2
```

**Example 2:**
```
Input: root = [2,null,3,null,4,null,5,null,6]
Output: 5
```

**Constraints:**
- The number of nodes in the tree is in the range `[0, 10^5]`.
- `-1000 <= Node.val <= 1000`

## 解题思路

使用深度优先搜索（DFS）递归计算二叉树的最小深度。

**算法步骤：**
1. 如果根节点为空，返回 0
2. 如果根节点是叶子节点（左右子树都为空），返回 1
3. 初始化 min_depth 为 INT_MAX
4. 如果左子树存在，递归计算左子树的最小深度，并更新 min_depth
5. 如果右子树存在，递归计算右子树的最小深度，并更新 min_depth
6. 返回 min_depth + 1

**关键点：**
- **叶子节点的定义**：叶子节点是没有子节点的节点
- **避免常见错误**：不能简单地返回 `min(leftDepth, rightDepth) + 1`
  - 当只有一个子树时，另一个子树深度为 0，会导致错误结果
  - 正确做法是只对存在的子树进行递归计算
- **使用 INT_MAX**：作为初始值确保只计算存在的子树

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是节点数，最坏情况下需要访问所有节点
- **空间复杂度**：O(h)，其中 h 是树的高度（递归栈深度）
  - 最坏情况下（树退化为链表），空间复杂度为 O(n)
  - 平均情况下（平衡树），空间复杂度为 O(log n)

## 相关标签

[树] [深度优先搜索] [广度优先搜索] [二叉树]

## 参考链接

https://leetcode.com/problems/minimum-depth-of-binary-tree/
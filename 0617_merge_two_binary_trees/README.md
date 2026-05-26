# 617. Merge Two Binary Trees

## 题目描述

You are given two binary trees `root1` and `root2`.

Imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not. You need to merge the two trees into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of the new tree.

Return the merged tree.

Note: The merging process must start from the root nodes of both trees.

### 示例

**Example 1:**

```
Input:
	Tree 1                     Tree 2
          1                         2
         / \                       / \
        3   2                     1   3
       /                           \   \
      5                             4   7
Output:
Merged tree:
	     3
	    / \
	   4   5
	  / \   \
	 5   4   7
```

**Example 2:**

```
Input: root1 = [1], root2 = [1,2]
Output: [2,2]
```

### 约束条件

- The number of nodes in both trees is in the range `[0, 2000]`.
- `-10^4 <= Node.val <= 10^4`

## 解题思路

使用递归的方法合并两棵二叉树：

1. **边界条件**：如果两个节点都为空，返回 nullptr
2. **创建新节点**：
   - 如果两个节点都存在，新节点的值为两节点值之和
   - 如果只有一个节点存在，新节点的值为该节点的值（空节点视为0）
3. **递归处理**：
   - 递归合并左子树
   - 递归合并右子树

这种方法不修改输入的树，而是创建一棵新树，避免了副作用。

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是两棵树中节点的总数。每个节点只访问一次。
- **空间复杂度**：O(h)，其中 h 是树的高度。这是递归栈的深度，最坏情况下树退化为链表，空间复杂度为 O(n)。

## 相关标签

Tree, Depth-First Search, Binary Tree

## 参考链接

https://leetcode.com/problems/merge-two-binary-trees/

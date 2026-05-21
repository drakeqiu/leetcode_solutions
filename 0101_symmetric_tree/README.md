# 101. Symmetric Tree

## 题目描述

Given the `root` of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

**Example 1:**
```
Input: root = [1,2,2,3,4,4,3]
Output: true
```

**Example 2:**
```
Input: root = [1,2,2,null,3,null,3]
Output: false
```

**Constraints:**
- The number of nodes in the tree is in the range `[0, 1000]`.
- `-100 <= Node.val <= 100`

## 解题思路

使用递归（深度优先搜索）的方法判断二叉树是否对称。

**算法步骤：**
1. **基准情况**：如果根节点为空（`nullptr`），空树是对称的，返回 `true`
2. **递归检查**：调用辅助函数 `check` 比较左右子树是否互为镜像
3. **镜像检查**（`check` 函数）：
   - **基准情况1**：如果两个节点都为空，说明对应位置都结束，返回 `true`
   - **基准情况2**：如果只有一个节点为空，说明结构不对称，返回 `false`
   - **递归比较**：
     - 比较当前节点的值是否相同：`p->val == q->val`
     - 递归比较左子树的左节点和右子树的右节点：`check(p->left, q->right)`
     - 递归比较左子树的右节点和右子树的左节点：`check(p->right, q->left)`
   - **返回结果**：只有当值相同且镜像位置的子树都相同时，才是对称的

**关键点：**
- 对称性的定义：左子树的左节点对应右子树的右节点，左子树的右节点对应右子树的左节点
- 递归天然地遍历了所有节点
- 每个节点只被访问一次
- 通过递归同时遍历左右子树，确保比较的是镜像位置的节点

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是二叉树的节点数。需要遍历树的所有节点来检查对称性。
- **空间复杂度**：O(h)，其中 h 是二叉树的高度。空间复杂度主要来自递归调用栈。在最坏情况下（树完全不平衡），递归深度为 O(n)；在最好情况下（树完全平衡），递归深度为 O(log n)。

## 相关标签

[树] [深度优先搜索] [广度优先搜索] [二叉树]

## 参考链接

https://leetcode.com/problems/symmetric-tree/

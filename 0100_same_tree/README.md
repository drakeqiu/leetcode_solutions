# 100. Same Tree

## 题目描述

Given the roots of two binary trees `p` and `q`, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

**Example 1:**
```
Input: p = [1,2,3], q = [1,2,3]
Output: true
```

**Example 2:**
```
Input: p = [1,2], q = [1,null,2]
Output: false
```

**Example 3:**
```
Input: p = [1,2,1], q = [1,1,2]
Output: false
```

**Constraints:**
- The number of nodes in both trees is in the range `[0, 100]`.
- `-10^4 <= Node.val <= 10^4`

## 解题思路

使用递归（深度优先搜索）的方法判断两棵二叉树是否相同。

**算法步骤：**
1. **基准情况1**：如果两个节点都为空（`nullptr`），说明两棵树在当前位置都结束了，返回 `true`
2. **基准情况2**：如果只有一个节点为空，说明两棵树结构不同，返回 `false`
3. **递归比较**：
   - 比较当前节点的值是否相同：`p->val == q->val`
   - 递归比较左子树是否相同：`isSameTree(p->left, q->left)`
   - 递归比较右子树是否相同：`isSameTree(p->right, q->right)`
4. **返回结果**：只有当当前节点值相同且左右子树都相同时，两棵树才相同

**关键点：**
- 递归天然地遍历了所有节点
- 每个节点只被访问一次
- 通过递归同时遍历两棵树，确保比较的是对应位置的节点
- 空树作为递归的终止条件

## 复杂度分析

- **时间复杂度**：O(min(m, n))，其中 m 和 n 分别是两棵二叉树的节点数。在最坏情况下需要遍历两棵树的所有节点，但一旦发现不相同的节点就会立即返回。
- **空间复杂度**：O(min(m, n))，空间复杂度主要来自递归调用栈。在最坏情况下（两棵树完全相同），递归深度为树的高度，最坏为 O(min(m, n))（当树退化为链表时）。

## 相关标签

[树] [深度优先搜索] [广度优先搜索] [二叉树]

## 参考链接

https://leetcode.com/problems/same-tree/

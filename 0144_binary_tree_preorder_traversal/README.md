# 144. Binary Tree Preorder Traversal

## 题目描述

Given the `root` of a binary tree, return the preorder traversal of its nodes' values.

**Example 1:**
```
Input: root = [1,null,2,3]
Output: [1,2,3]
```

**Example 2:**
```
Input: root = []
Output: []
```

**Example 3:**
```
Input: root = [1]
Output: [1]
```

**Constraints:**
- The number of nodes in the tree is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`

**Follow up:** Recursive solution is trivial, could you do it iteratively?

## 解题思路

前序遍历的顺序是：根节点 -> 左子树 -> 右子树。提供两种实现方式。

### 方法一：递归（DFS）

**算法步骤：**
1. 如果节点为空，直接返回
2. 访问当前节点（将值加入结果）
3. 递归遍历左子树
4. 递归遍历右子树

### 方法二：迭代（使用栈）

使用栈来模拟递归过程。

**算法步骤：**
1. 如果根节点为空，返回空结果
2. 将根节点入栈
3. 循环直到栈为空：
   - 弹出栈顶节点
   - 访问该节点（将值加入结果）
   - 先将右子节点入栈（如果存在）
   - 再将左子节点入栈（如果存在）
   - 注意：先入右再入左，因为栈是后进先出

**关键点：**
- 栈的特性保证了先访问根节点，然后左子树，最后右子树
- 入栈顺序与访问顺序相反
- 迭代方法避免了递归的栈空间开销

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是节点数，每个节点访问一次
- **空间复杂度**：
  - 递归：O(h)，其中 h 是树的高度（递归栈深度）
  - 迭代：O(h)，其中 h 是树的高度（栈的最大深度）
  - 最坏情况下（树退化为链表）：O(n)
  - 平均情况下（平衡树）：O(log n)

## 相关标签

[栈] [树] [深度优先搜索] [二叉树]

## 参考链接

https://leetcode.com/problems/binary-tree-preorder-traversal/

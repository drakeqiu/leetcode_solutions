# 145. Binary Tree Postorder Traversal

## 题目描述

Given the `root` of a binary tree, return the postorder traversal of its nodes' values.

**Example 1:**
```
Input: root = [1,null,2,3]
Output: [3,2,1]
```

**Example 2:**
```
Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]
Output: [4,6,7,5,2,9,8,3,1]
```

**Example 3:**
```
Input: root = []
Output: []
```

**Example 4:**
```
Input: root = [1]
Output: [1]
```

**Constraints:**
- The number of nodes in the tree is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`

**Follow up:** Recursive solution is trivial, could you do it iteratively?

## 解题思路

后序遍历的顺序是：左子树 -> 右子树 -> 根节点。提供两种实现方式。

### 方法一：递归（DFS）

**算法步骤：**
1. 如果节点为空，直接返回
2. 递归遍历左子树
3. 递归遍历右子树
4. 访问当前节点（将值加入结果）

### 方法二：迭代（使用栈）

使用栈来模拟递归过程，并使用 `prev` 指针记录上一个访问的节点。

**算法步骤：**
1. 如果根节点为空，返回空结果
2. 将根节点入栈
3. 循环直到栈为空：
   - 查看栈顶节点（不弹出）
   - 如果当前节点是叶子节点，或者其子节点已经被访问过（通过 `prev` 判断）：
     - 访问该节点（将值加入结果）
     - 弹出栈顶节点
     - 更新 `prev` 为当前节点
   - 否则：
     - 先将右子节点入栈（如果存在）
     - 再将左子节点入栈（如果存在）
     - 注意：先入右再入左，因为栈是后进先出

**关键点：**
- 使用 `prev` 指针来判断子节点是否已经被访问过
- 只有当子节点已经被访问过，或者当前节点是叶子节点时，才能访问当前节点
- 入栈顺序与访问顺序相反（先右后左）
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

https://leetcode.com/problems/binary-tree-postorder-traversal/

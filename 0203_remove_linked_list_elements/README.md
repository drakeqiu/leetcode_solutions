# 203. Remove Linked List Elements

## 题目描述

Given the `head` of a linked list and an integer `val`, remove all the nodes of the linked list that has `Node.val == val`, and return the new head.

**Example 1:**
```
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
```

**Example 2:**
```
Input: head = [], val = 1
Output: []
```

**Example 3:**
```
Input: head = [7,7,7,7], val = 7
Output: []
```

**Constraints:**
- The number of nodes in the list is in the range `[0, 10^4]`.
- `1 <= Node.val <= 50`
- `0 <= val <= 50`

## 解题思路

使用虚拟头节点（dummy node）简化操作：创建一个虚拟头节点指向原链表头，这样所有节点（包括原头节点）都可以用统一的方式处理。遍历链表，当遇到节点值等于val时，删除该节点；否则，移动到下一个节点。

## 复杂度分析

- 时间复杂度：O(n)，需要遍历整个链表
- 空间复杂度：O(1)，只使用常数额外空间（虚拟头节点）

## 相关标签

[链表] [递归]

## 参考链接

https://leetcode.com/problems/remove-linked-list-elements/

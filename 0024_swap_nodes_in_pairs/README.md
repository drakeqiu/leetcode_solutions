# 24. Swap Nodes in Pairs

## 题目描述

Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

**Example 1:**
```
Input: head = [1,2,3,4]
Output: [2,1,4,3]
```

**Example 2:**
```
Input: head = []
Output: []
```

**Example 3:**
```
Input: head = [1]
Output: [1]
```

**Constraints:**
- The number of nodes in the list is in the range [0, 100].
- 0 <= Node.val <= 100.

## 解题思路

使用递归的方法两两交换链表节点：

1. **递归基准情况**：如果链表为空或只有一个节点，直接返回头节点
2. **交换逻辑**：
   - 保存第二个节点作为新的头节点 `newHead = head->next`
   - 递归处理剩余部分：`head->next = swapPairs(newHead->next)`
   - 将第一个节点接到第二个节点后面：`newHead->next = head`
   - 返回新的头节点 `newHead`

递归过程会自动处理链表的每一对节点，直到到达末尾。

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是链表长度。每个节点被访问一次
- **空间复杂度**：O(n)，递归调用栈的深度最大为 n/2

## 相关标签

[链表] [递归] [迭代]

## 参考链接

https://leetcode.com/problems/swap-nodes-in-pairs/

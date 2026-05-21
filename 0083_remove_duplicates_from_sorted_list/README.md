# 83. Remove Duplicates from Sorted List

## 题目描述

Given the `head` of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

**Example 1:**
```
Input: head = [1,1,2]
Output: [1,2]
```

**Example 2:**
```
Input: head = [1,1,2,3,3]
Output: [1,2,3]
```

**Constraints:**
- The number of nodes in the list is in the range `[0, 300]`.
- `-100 <= Node.val <= 100`
- The list is guaranteed to be sorted in ascending order.

## 解题思路

由于链表已经排序，重复的节点一定是相邻的，因此可以使用单次遍历的方法删除重复节点。

**算法步骤：**
1. **初始化指针**：使用 `cur` 指针指向链表头部
2. **遍历链表**：
   - 检查当前节点和下一个节点的值是否相同
   - **如果相同**：删除下一个节点
     - 保存下一个节点的指针 `tmp`
     - 将当前节点的 `next` 指向下一个节点的 `next`
     - 释放 `tmp` 节点的内存
   - **如果不相同**：移动 `cur` 指针到下一个节点
3. **终止条件**：当 `cur` 或 `cur->next` 为空时，遍历结束
4. **返回结果**：返回链表头部

**关键点：**
- 利用链表已排序的特性，只需比较相邻节点
- 删除节点时，先保存要删除节点的指针，再调整链接，最后释放内存
- 删除重复节点后不移动 `cur` 指针，因为新的 `cur->next` 可能还是重复的
- 只有当节点值不同时才移动 `cur` 指针

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是链表的长度。只需要遍历链表一次。
- **空间复杂度**：O(1)，只使用了常数级别的额外空间（一个指针）。

## 相关标签

[链表] [双指针]

## 参考链接

https://leetcode.com/problems/remove-duplicates-from-sorted-list/

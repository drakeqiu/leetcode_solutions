# 141. Linked List Cycle

## 题目描述

Given `head`, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer. Internally, `pos` is used to denote the index of the node that tail's `next` pointer is connected to. Note that `pos` is not passed as a parameter.

Return `true` if there is a cycle in the linked list. Otherwise, return `false`.

**Example 1:**
```
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
```

**Example 2:**
```
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
```

**Example 3:**
```
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
```

**Constraints:**
- The number of the nodes in the list is in the range [0, 10^4].
- -10^5 <= Node.val <= 10^5
- `pos` is -1 or a valid index in the linked list.

**Follow up:** Can you solve it using O(1) (i.e. constant) memory?

## 解题思路

使用快慢指针（Floyd's Cycle Detection Algorithm）检测链表是否有环。

**算法步骤：**
1. 初始化两个指针：slow 和 fast，都从 head 开始
2. slow 每次走一步，fast 每次走两步
3. 如果链表有环，fast 最终会追上 slow（slow == fast）
4. 如果链表无环，fast 会到达链表末尾（fast == nullptr 或 fast->next == nullptr）

**关键点：**
- 快慢指针的速度差确保了如果有环，fast 会在有限时间内追上 slow
- 边界条件：需要检查 fast 和 fast->next 是否存在，才能让 fast 走两步
- 满足 O(1) 空间复杂度要求（Follow-up）

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是链表长度
  - 如果有环，fast 会在 O(n) 时间内追上 slow
  - 如果无环，fast 会在 O(n/2) 时间内到达末尾
- **空间复杂度**：O(1)，只使用两个指针，满足 Follow-up 要求

## 相关标签

[链表] [双指针]

## 参考链接

https://leetcode.com/problems/linked-list-cycle/
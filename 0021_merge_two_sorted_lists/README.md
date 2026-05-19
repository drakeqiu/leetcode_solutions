# 21. Merge Two Sorted Lists

## 题目描述

You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

**Example 1:**
```
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
```

**Example 2:**
```
Input: list1 = [], list2 = []
Output: []
```

**Example 3:**
```
Input: list1 = [], list2 = [0]
Output: [0]
```

**Constraints:**
- The number of nodes in both lists is in the range [0, 50].
- -100 <= Node.val <= 100
- Both `list1` and `list2` are sorted in non-decreasing order.

## 解题思路

使用迭代方法合并两个有序链表，采用哑节点（Dummy Node）技巧简化边界处理。

**算法步骤：**
1. 创建一个哑节点 `prev` 作为合并后链表的虚拟头节点
2. 使用指针 `cur` 指向当前要连接的位置
3. 遍历两个链表，比较当前节点的值：
   - 如果 list1 的值较小，将 list1 的节点连接到 `cur->next`，list1 后移
   - 否则将 list2 的节点连接到 `cur->next`，list2 后移
   - `cur` 后移
4. 当其中一个链表遍历完后，将剩余的链表直接连接到 `cur->next`
5. 返回 `prev->next`（哑节点的下一个节点才是真正的头节点）

**关键点：**
- 哑节点避免了单独处理头节点的边界情况
- 只需遍历两个链表一次，时间效率高
- 不需要创建新节点，直接复用原有节点

## 复杂度分析

- **时间复杂度**：O(n + m)，其中 n 和 m 分别是两个链表的长度，需要遍历两个链表各一次
- **空间复杂度**：O(1)，只使用常数级别的额外空间（哑节点）

## 相关标签

[链表] [递归]

## 参考链接

https://leetcode.com/problems/merge-two-sorted-lists/
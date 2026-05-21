# 2. Add Two Numbers

## 题目描述

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

**Example 1:**
```
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
```

**Example 2:**
```
Input: l1 = [0], l2 = [0]
Output: [0]
```

**Example 3:**
```
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
```

**Constraints:**
- The number of nodes in each linked list is in the range [1, 100].
- 0 <= Node.val <= 9
- It is guaranteed that the list represents a number that does not have leading zeros.

## 解题思路

使用模拟手工加法的方式，从低位到高位逐位相加，并处理进位。

**算法步骤：**
1. 初始化进位 `carry = 0` 和结果链表的头指针 `res = nullptr`
2. 使用两个指针 `p` 和 `q` 分别遍历两个输入链表
3. 循环条件为 `p != nullptr || q != nullptr || carry > 0`：
   - 获取当前位的值，如果链表已遍历完则取 0
   - 计算当前位的总和：`total = val1 + val2 + carry`
   - 计算当前位的余数：`remainder = total % 10`
   - 计算新的进位：`carry = total / 10`
   - 创建新节点存储余数，并连接到结果链表
   - 移动指针到下一个节点
4. 返回结果链表的头节点

**关键点：**
- 循环条件包含 `carry > 0`，确保处理最后的进位
- 两个链表长度不同时，较短的链表自动补 0（通过三元运算符）
- 使用 `res` 和 `cur` 两个指针，`res` 保存链表头，`cur` 用于构建链表

## 复杂度分析

- **时间复杂度**：O(max(m, n))，其中 m 和 n 分别是两个链表的长度。需要遍历两个链表的所有节点，最多遍历 max(m, n) + 1 次（考虑最后的进位）。
- **空间复杂度**：O(max(m, n))，结果链表的长度最多为 max(m, n) + 1（当有最后进位时）。

## 相关标签

[链表] [数学]

## 参考链接

https://leetcode.com/problems/add-two-numbers/

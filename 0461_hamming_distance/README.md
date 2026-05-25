# 461. Hamming Distance

## 题目描述

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers `x` and `y`, return the Hamming distance between them.

**Example 1:**
```
Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
The above arrows point to positions where the corresponding bits are different.
```

**Example 2:**
```
Input: x = 3, y = 1
Output: 1
```

**Constraints:**
- `0 <= x, y <= 2^31 - 1`

## 解题思路

使用异或操作和位运算：先计算 x ^ y，得到两个数不同的位（不同的位为1）。然后使用 Brian Kernighan 算法计算1的个数：每次执行 v & (v - 1) 都会消除v中最低位的1，直到v为0。

## 复杂度分析

- 时间复杂度：O(k)，其中k是x ^ y中1的个数，最坏情况下O(32) = O(1)
- 空间复杂度：O(1)，只使用常数额外空间

## 相关标签

[位运算] [异或]

## 参考链接

https://leetcode.com/problems/hamming-distance/

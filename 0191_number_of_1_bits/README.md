# 191. Number of 1 Bits

## 题目描述

Write a function that takes an unsigned integer and return the number of '1' bits it has (also known as the Hamming weight).

**Example 1:**
```
Input: n = 11 (binary: 00000000000000000000000000001011)
Output: 3
Explanation: The input binary string has a total of three '1' bits.
```

**Example 2:**
```
Input: n = 128 (binary: 00000000000000000000000010000000)
Output: 1
Explanation: The input binary string has a total of one '1' bit.
```

**Example 3:**
```
Input: n = 2147483645 (binary: 11111111111111111111111111111101)
Output: 31
Explanation: The input binary string has a total of thirty one '1' bits.
```

**Constraints:**
- The input must be a binary string of length 32.
- 1 <= n <= 2^31 - 1

**Follow up:** If this function is called many times, how would you optimize it?

## 解题思路

使用 Brian Kernighan 算法：`n &= (n - 1)` 这个操作会将 n 的二进制表示中最低位的 1 置为 0。循环执行此操作并统计次数，即可得到 1 的个数。

## 复杂度分析

- 时间复杂度：O(k)，其中 k 是 n 中 1 的个数，最坏情况下 O(32) = O(1)
- 空间复杂度：O(1)

## 相关标签

[位操作] [二进制]

## 参考链接

https://leetcode.com/problems/number-of-1-bits/

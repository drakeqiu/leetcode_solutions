# 231. Power of Two

## 题目描述

Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.

An integer `n` is a power of two, if there exists an integer `x` such that `n == 2^x`.

**Example 1:**
```
Input: n = 1
Output: true
Explanation: 2^0 = 1
```

**Example 2:**
```
Input: n = 16
Output: true
Explanation: 2^4 = 16
```

**Example 3:**
```
Input: n = 3
Output: false
```

**Constraints:**
- `-2^31 <= n <= 2^31 - 1`

**Follow up:** Could you solve it without loops/recursion?

## 解题思路

使用位操作：2的幂的二进制表示只有一个1。利用 `n & (n - 1)` 可以消除n的二进制表示中最低位的1。如果n是2的幂且大于0，则 `n & (n - 1)` 的结果为0。

## 复杂度分析

- 时间复杂度：O(1)
- 空间复杂度：O(1)

## 相关标签

[位操作] [数学] [递归]

## 参考链接

https://leetcode.com/problems/power-of-two/

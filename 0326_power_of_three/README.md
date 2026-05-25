# 326. Power of Three

## 题目描述

Given an integer `n`, return `true` if it is a power of three. Otherwise, return `false`.

An integer `n` is a power of three, if there exists an integer `x` such that `n == 3^x`.

**Example 1:**
```
Input: n = 27
Output: true
Explanation: 27 = 3^3
```

**Example 2:**
```
Input: n = 0
Output: false
Explanation: There is no x where 3^x = 0.
```

**Example 3:**
```
Input: n = -1
Output: false
Explanation: There is no x where 3^x = (-1).
```

**Constraints:**
- `-2^31 <= n <= 2^31 - 1`

**Follow up:** Could you solve it without loops/recursion?

## 解题思路

使用循环除法：当 n 能被3整除时，不断除以3。最终如果 n 等于1，说明是3的幂；否则不是3的幂。

## 复杂度分析

- 时间复杂度：O(log₃n)，其中 n 是输入的数字
- 空间复杂度：O(1)

## 相关标签

[数学] [递归]

## 参考链接

https://leetcode.com/problems/power-of-three/

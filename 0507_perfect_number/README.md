# 507. Perfect Number

## 题目描述

A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer `x` is an integer that can divide `x` evenly.

Given an integer `num`, return `true` if `num` is a perfect number, otherwise return `false`.

**Example 1:**
```
Input: num = 28
Output: true
Explanation: 28 = 1 + 2 + 4 + 7 + 14
1, 2, 4, 7, and 14 are all divisors of 28
```

**Example 2:**
```
Input: num = 7
Output: false
```

**Constraints:**
- `1 <= num <= 10^8`

## 解题思路

使用枚举法：从2开始遍历到√num，对于每个能整除num的数i，将i和num/i都加到和中。注意当i²==num时，只加一次i，避免重复。最后判断sum是否等于num。

已知在10^8范围内的完全数只有：6, 28, 496, 8128, 33550336，也可以直接判断是否在这几个数中。

## 复杂度分析

- 时间复杂度：O(√n)，只需遍历到√num
- 空间复杂度：O(1)，只使用常数额外空间

## 相关标签

[数学] [枚举]

## 参考链接

https://leetcode.com/problems/perfect-number/

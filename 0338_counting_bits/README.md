# 338. Counting Bits

## 题目描述

Given an integer `n`, return an array `ans` of length `n + 1` such that for each `i` (`0 <= i <= n`), `ans[i]` is the number of `1`'s in the binary representation of `i`.

**Example 1:**
```
Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
```

**Example 2:**
```
Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
```

**Constraints:**
- `0 <= n <= 10^5`

**Follow up:**
- It is very easy to come up with a solution with a runtime of `O(n log n)`. Can you do it in linear time `O(n)` and possibly in a single pass?
- Can you do it without using any built-in function (i.e., like `__builtin_popcount` in C++)?

## 解题思路

使用动态规划：`ans[i] = ans[i & (i - 1)] + 1`。`i & (i - 1)` 消除了i的最低位的1，所以 `ans[i]` 比 `ans[i & (i - 1)]` 多1个1。利用之前计算的结果，避免重复计算。

## 复杂度分析

- 时间复杂度：O(n)，每个数只计算一次
- 空间复杂度：O(n)，存储结果数组

## 相关标签

[位操作] [动态规划]

## 参考链接

https://leetcode.com/problems/counting-bits/

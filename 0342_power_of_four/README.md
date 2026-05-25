# 342. Power of Four

## 题目描述

Given an integer `n`, return `true` if it is a power of four. Otherwise, return `false`.

An integer `n` is a power of four, if there exists an integer `x` such that `n == 4^x`.

**Example 1:**
```
Input: n = 16
Output: true
```

**Example 2:**
```
Input: n = 5
Output: false
```

**Example 3:**
```
Input: n = 1
Output: true
```

**Constraints:**
- `-2^31 <= n <= 2^31 - 1`

**Follow up:** Could you solve it without loops/recursion?

## 解题思路

使用位运算：一个数是4的幂，当且仅当：
1. 是正数：`n > 0`
2. 只有一个1（是2的幂）：`(n & (n - 1)) == 0`
3. 1在偶数位上（是4的幂）：`(n & 0xaaaaaaaa) == 0`

其中 `0xAAAAAAAA` 的二进制是 `1010...1010`，所有奇数位都是1。如果 `n & 0xAAAAAAAA == 0`，说明 `n` 的1都在偶数位上，因此是4的幂。

## 复杂度分析

- 时间复杂度：O(1)，只进行常数次位运算
- 空间复杂度：O(1)，只使用常数额外空间

## 相关标签

[位运算] [数学] [递归]

## 参考链接

https://leetcode.com/problems/power-of-four/

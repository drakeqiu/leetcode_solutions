# 9. Palindrome Number

## 题目描述

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

**Example 1:**
```
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
```

**Example 2:**
```
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
```

**Example 3:**
```
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
```

**Constraints:**
- -2^31 <= x <= 2^31 - 1

**Follow up:** Could you solve it without converting the integer to a string?

## 解题思路

不使用字符串转换，而是通过数学方法反转数字的一半来判断回文。

**算法步骤：**
1. 特殊情况处理：
   - 负数不是回文（负号无法对称）
   - 以 0 结尾但不等于 0 的数不是回文（如 10, 100）
2. 反转数字的后半部分：
   - 每次取 `x` 的最后一位加到 `reversed` 上
   - 同时将 `x` 除以 10
   - 当 `reversed >= x` 时停止（已经处理了一半或超过一半的数字）
3. 判断回文：
   - 偶数位数：`x == reversed`（如 1221 → x=12, reversed=12）
   - 奇数位数：`x == reversed / 10`（如 12321 → x=12, reversed=123，中间的 3 可以忽略）

**关键点：**
- 只反转一半数字，避免整数溢出问题
- 通过 `x > reversed` 作为循环条件，自动处理奇偶位数的情况

## 复杂度分析

- **时间复杂度**：O(log₁₀n)，每次迭代将数字除以 10，所以迭代次数为数字的位数的一半
- **空间复杂度**：O(1)，只使用了常数个变量

## 相关标签

[数学]

## 参考链接

https://leetcode.com/problems/palindrome-number/

# 344. Reverse String

## 题目描述

Write a function that reverses a string. The input string is given as an array of characters `s`. You must do this by modifying the input array in-place with `O(1)` extra memory.

**Example 1:**
```
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
```

**Example 2:**
```
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
```

**Constraints:**
- `1 <= s.length <= 10^5`
- `s[i]` is a printable ASCII character.

## 解题思路

使用双指针法：一个指针从前往后，一个指针从后往前，交换两个指针指向的字符，然后向中间移动，直到两个指针相遇或交叉。这样可以在原地修改数组，满足O(1)空间复杂度的要求。

## 复杂度分析

- 时间复杂度：O(n)，需要遍历一半的数组
- 空间复杂度：O(1)，只使用常数额外空间

## 相关标签

[双指针] [字符串] [递归]

## 参考链接

https://leetcode.com/problems/reverse-string/

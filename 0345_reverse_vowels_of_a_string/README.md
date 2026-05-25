# 345. Reverse Vowels of a String

## 题目描述

Given a string `s`, reverse only all the vowels in the string and return it.

The vowels are `'a'`, `'e'`, `'i'`, `'o'`, and `'u'`, and they can appear in both lower and upper cases, more than once.

**Example 1:**
```
Input: s = "hello"
Output: "holle"
```

**Example 2:**
```
Input: s = "leetcode"
Output: "leotcede"
```

**Constraints:**
- `1 <= s.length <= 3 * 10^5`
- `s` consist of printable ASCII characters.

## 解题思路

使用双指针法：一个指针从前往后找元音，一个指针从后往前找元音，找到后交换它们，然后继续移动指针直到相遇。使用哈希集合来快速判断一个字符是否是元音。

## 复杂度分析

- 时间复杂度：O(n)，最坏情况下需要遍历整个字符串
- 空间复杂度：O(1)，哈希集合只存储10个元音字母

## 相关标签

[双指针] [字符串]

## 参考链接

https://leetcode.com/problems/reverse-vowels-of-a-string/

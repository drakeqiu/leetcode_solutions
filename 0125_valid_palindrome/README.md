# 125. Valid Palindrome

## 题目描述

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` if it is a palindrome, or `false` otherwise.

**Example 1:**
```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
```

**Example 2:**
```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
```

**Example 3:**
```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
```

**Constraints:**
- `1 <= s.length <= 2 * 10^5`
- `s` consists only of printable ASCII characters.

## 解题思路

使用双指针的方法判断字符串是否为回文串。

**算法步骤：**
1. **初始化指针**：左指针 `left` 指向字符串开头，右指针 `right` 指向字符串末尾
2. **双指针遍历**：
   - **跳过非字母数字字符**：使用 `isalnum()` 函数检查字符是否为字母或数字，如果不是则跳过
   - **比较字符**：将左右指针指向的字符都转换为小写（使用 `tolower()`），然后比较是否相等
   - **移动指针**：如果相等，左指针右移，右指针左移；如果不相等，返回 `false`
3. **终止条件**：当 `left >= right` 时，说明所有对应位置的字符都相等，返回 `true`

**关键点：**
- 使用 `isalnum()` 检查字母和数字（包括 a-z, A-Z, 0-9）
- 使用 `tolower()` 统一转换为小写，忽略大小写差异
- 双指针同时向中间移动，只需遍历一次字符串
- 空字符串或只包含非字母数字字符的字符串视为回文串

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是字符串的长度。双指针最多遍历字符串一次。
- **空间复杂度**：O(1)，只使用了常数级别的额外空间（两个指针）。

## 相关标签

[双指针] [字符串]

## 参考链接

https://leetcode.com/problems/valid-palindrome/

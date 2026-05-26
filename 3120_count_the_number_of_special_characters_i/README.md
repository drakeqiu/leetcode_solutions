# 3120. Count the Number of Special Characters I

## 题目描述

You are given a string `word`. A letter is called **special** if it appears **both** in lowercase and uppercase in `word`.

Return the number of **special** letters in `word`.

### 示例

**Example 1:**

```
Input: word = "aaAbcBC"
Output: 3
Explanation:
The special characters in word are 'a', 'b', and 'c'.
```

**Example 2:**

```
Input: word = "abc"
Output: 0
Explanation:
No character in word appears in uppercase.
```

**Example 3:**

```
Input: word = "abBCab"
Output: 1
Explanation:
The only special character in word is 'b'.
```

### 约束条件

- `1 <= word.length <= 50`
- `word` consists of only lowercase and uppercase English letters.

## 解题思路

使用两个布尔数组分别记录小写和大写字母的出现情况：

1. **标记出现**：遍历字符串，使用两个数组 `lowerCnt` 和 `upperCnt` 分别记录小写和大写字母是否出现
   - 如果是小写字母，在 `lowerCnt` 中标记
   - 如果是大写字母，在 `upperCnt` 中标记

2. **统计特殊字母**：遍历26个字母，检查每个字母是否同时在小写和大写数组中都被标记
   - 如果 `lowerCnt[i]` 和 `upperCnt[i]` 都为 true，则该字母是特殊字母

这种方法简单直观，时间和空间复杂度都很优。

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是单词的长度。需要遍历一次字符串标记字母，再遍历26个字母统计。
- **空间复杂度**：O(1)，只使用了两个固定大小为26的布尔数组。

## 相关标签

String, Hash Table

## 参考链接

https://leetcode.com/problems/count-the-number-of-special-characters-i/

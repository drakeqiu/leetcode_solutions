# 383. Ransom Note

## 题目描述

Given two strings `ransomNote` and `magazine`, return `true` if `ransomNote` can be constructed by using the letters from `magazine` and `false` otherwise.

Each letter in `magazine` can only be used once in `ransomNote`.

**Example 1:**
```
Input: ransomNote = "a", magazine = "b"
Output: false
```

**Example 2:**
```
Input: ransomNote = "aa", magazine = "ab"
Output: false
```

**Example 3:**
```
Input: ransomNote = "aa", magazine = "aab"
Output: true
```

**Constraints:**
- `1 <= ransomNote.length, magazine.length <= 10^5`
- `ransomNote` and `magazine` consist of lowercase English letters.

## 解题思路

使用数组计数的方法：

1. 创建一个大小为26的数组 `cnt`，统计 `magazine` 中每个字符的出现次数
2. 遍历 `ransomNote`，对于每个字符，将对应计数减1
3. 如果某个字符的计数变为负数，说明 `magazine` 中该字符的数量不足，返回 false
4. 如果遍历完所有字符后没有出现负数，说明可以构造，返回 true

由于题目说明只包含小写字母，使用固定大小的数组比哈希表更高效。

## 复杂度分析

- 时间复杂度：O(m + n)，其中 m 是 `ransomNote` 的长度，n 是 `magazine` 的长度
- 空间复杂度：O(1)，只使用固定大小的数组（26个元素）

## 相关标签

[哈希表] [字符串] [计数]

## 参考链接

https://leetcode.com/problems/ransom-note/

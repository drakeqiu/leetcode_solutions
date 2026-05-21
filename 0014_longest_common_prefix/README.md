# 14. Longest Common Prefix

## 题目描述

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

### 示例

**Example 1:**
```
Input: strs = ["flower","flow","flight"]
Output: "fl"
```

**Example 2:**
```
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
```

### 约束条件

- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` consists of only lowercase English letters.

## 解题思路

使用**分治法**（Divide and Conquer）来解决这个问题：

1. **分治思想**：将字符串数组分成两半，分别求出左半部分和右半部分的最长公共前缀，然后合并这两个结果。
2. **递归终止条件**：当数组中只有一个字符串时，直接返回该字符串。
3. **合并逻辑**：比较两个字符串的公共前缀，逐个字符比较，直到遇到不相同的字符为止。

**算法步骤**：
- 如果数组为空，返回空字符串
- 将数组分成左右两部分
- 递归计算左半部分的最长公共前缀
- 递归计算右半部分的最长公共前缀
- 合并左右两部分的公共前缀

## 复杂度分析

- **时间复杂度**：O(S)，其中 S 是所有字符串中字符的总数。在最坏情况下，每个字符都会被比较一次。
- **空间复杂度**：O(m*log n)，其中 m 是字符串的平均长度，n 是字符串的数量。这是由于递归调用栈的空间消耗。

## 相关标签

[字符串] [数组]

## 参考链接

https://leetcode.com/problems/longest-common-prefix/

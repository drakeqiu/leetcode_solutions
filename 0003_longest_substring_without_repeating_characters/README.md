# 3. Longest Substring Without Repeating Characters

## 题目描述

Given a string `s`, find the length of the longest substring without repeating characters.

**Example 1:**
```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
```

**Example 2:**
```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```

**Example 3:**
```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```

**Constraints:**
- 0 <= s.length <= 5 * 10^4
- s consists of English letters, digits, symbols and spaces.

## 解题思路

### 滑动窗口 + 哈希表

使用滑动窗口维护一个无重复字符的子串，哈希表记录每个字符最后出现的位置。

**核心思路**：
1. 维护窗口 `[left, right]`，保证窗口内无重复字符
2. `right` 指针向右扩展，遍历每个字符
3. 当遇到重复字符时，将 `left` 跳到重复字符上次出现位置的下一位
4. 每次更新最大长度 `ans = max(ans, right - left + 1)`

**关键点**：
- 判断重复时需要检查 `m[ch] >= left`，确保重复字符在当前窗口内
- 如果重复字符在窗口外（`m[ch] < left`），则不需要移动 `left`

```
示例: s = "abcabcbb"

right=0: a, 窗口[a], ans=1
right=1: b, 窗口[ab], ans=2
right=2: c, 窗口[abc], ans=3
right=3: a重复, left跳到1, 窗口[bca], ans=3
right=4: b重复, left跳到2, 窗口[cab], ans=3
right=5: c重复, left跳到3, 窗口[abc], ans=3
right=6: b重复, left跳到5, 窗口[cb], ans=3
right=7: b重复, left跳到7, 窗口[b], ans=3

最终答案: 3
```

## 复杂度分析

- **时间复杂度**：O(n)，每个字符最多被访问一次
- **空间复杂度**：O(min(m, n))，其中 m 是字符集大小，n 是字符串长度

## 相关标签

[哈希表] [字符串] [滑动窗口]

## 参考链接

https://leetcode.com/problems/longest-substring-without-repeating-characters/

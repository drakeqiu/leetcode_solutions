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

使用 `bitset<128>` 记录所有出现的字符：

1. **标记出现**：遍历字符串，使用 bitset 标记每个字符的出现情况
   - bitset 的索引对应字符的 ASCII 码
   - 例如：`seen['a']` 表示字符 'a' 是否出现过

2. **统计特殊字母**：遍历26个字母，检查每个字母的小写和大写形式是否都被标记
   - 如果 `seen['a' + i]` 和 `seen['A' + i]` 都为 true，则该字母是特殊字母

使用 bitset 的优势：
- 代码简洁，无需判断字符是大写还是小写
- 位操作效率高
- 空间紧凑（128 bits = 16 bytes）

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是单词的长度。需要遍历一次字符串标记字符，再遍历26个字母统计。
- **空间复杂度**：O(1)，只使用了一个固定大小为 128 的 bitset。

## 相关标签

String, Hash Table

## 参考链接

https://leetcode.com/problems/count-the-number-of-special-characters-i/

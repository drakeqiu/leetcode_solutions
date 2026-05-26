# 520. Detect Capital

## 题目描述

We define the usage of capitals in a word to be right when one of the following cases holds:

1. All letters in this word are capitals, like "USA".
2. All letters in this word are not capitals, like "leetcode".
3. Only the first letter in this word is capital, like "Google".

Otherwise, we define that this word doesn't use capitals in a right way.

Given a string `word`, return `true` if the usage of capitals in it is right.

### 示例

**Example 1:**

```
Input: word = "USA"
Output: true
```

**Example 2:**

```
Input: word = "FlaG"
Output: false
```

### 约束条件

- `1 <= word.length <= 100`
- `word` consists of lowercase and uppercase English letters.

## 解题思路

通过观察合法的三种情况，可以发现一个规律：**第二个字母的大小写决定了整个单词的模式**。

合法的三种情况：
1. **全大写**：`USA` - word[0]大写，word[1]大写，后面都大写
2. **全小写**：`leetcode` - word[0]小写，word[1]小写，后面都小写
3. **仅首字母大写**：`Google` - word[0]大写，word[1]小写，后面都小写

不合法的情况：
1. 第一个字母小写且第二个字母大写（如 `fLag`）
2. 从第三个字母开始，如果有字母的大小写与第二个字母不一致

算法步骤：
1. 如果单词长度 >= 2，且第一个字母小写且第二个字母大写，直接返回 false
2. 从第三个字母开始遍历，检查每个字母的大小写是否与第二个字母一致
3. 使用异或运算 `^` 检查两个布尔值是否不同，如果不同则返回 false
4. 如果遍历结束没有发现不一致，返回 true

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是单词的长度。最多遍历一次字符串。
- **空间复杂度**：O(1)，只使用了常数级别的额外空间。

## 相关标签

String

## 参考链接

https://leetcode.com/problems/detect-capital/

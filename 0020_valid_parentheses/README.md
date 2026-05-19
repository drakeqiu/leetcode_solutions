# 20. Valid Parentheses

## 题目描述

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

**Example 1:**
```
Input: s = "()"
Output: true
```

**Example 2:**
```
Input: s = "()[]{}"
Output: true
```

**Example 3:**
```
Input: s = "(]"
Output: false
```

**Constraints:**
- 1 <= s.length <= 10^4
- s consists of parentheses only '()[]{}'.

## 解题思路

使用栈（Stack）数据结构来匹配括号。遇到左括号时入栈，遇到右括号时检查栈顶是否匹配的左括号。

**算法步骤：**
1. 建立右括号到左括号的映射表：`)` → `(`，`}` → `{`，`]` → `[`
2. 遍历字符串中的每个字符：
   - 如果是右括号（在映射表中）：
     - 检查栈是否为空或栈顶元素不匹配，则返回 false
     - 否则弹出栈顶元素（匹配成功）
   - 如果是左括号，则入栈
3. 遍历结束后，检查栈是否为空（所有左括号都匹配）

**关键点：**
- 使用哈希表快速判断字符类型和匹配关系
- 栈的特性保证了括号的顺序正确性（后进先出）
- 最后检查栈为空确保所有左括号都有对应的右括号

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是字符串长度，只需遍历一次
- **空间复杂度**：O(n)，最坏情况下栈中存储所有左括号

## 相关标签

[栈] [字符串]

## 参考链接

https://leetcode.com/problems/valid-parentheses/
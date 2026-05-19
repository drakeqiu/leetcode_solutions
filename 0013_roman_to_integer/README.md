# 13. Roman to Integer

## 题目描述

Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D` and `M`.

```
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
```

For example, `2` is written as `II` in Roman numeral, just two ones added together. `12` is written as `XII`, which is simply `X + II`. The number `27` is written as `XXVII`, which is `XX + V + II`.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as `IX`. There are six instances where subtraction is used:

- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9.
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90.
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.

**Example 1:**
```
Input: s = "III"
Output: 3
Explanation: III = 3.
```

**Example 2:**
```
Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
```

**Example 3:**
```
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
```

**Constraints:**
- 1 <= s.length <= 15
- s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
- It is guaranteed that s is a valid roman numeral in the range [1, 3999].

## 解题思路

利用罗马数字的规则：当小值字符在大值字符左边时表示减法，否则表示加法。

**算法步骤：**
1. 建立罗马字符到数值的映射表
2. 从左到右遍历字符串：
   - 如果当前字符的值小于下一个字符的值，则减去当前值（如 IV 中的 I）
   - 否则加上当前值
3. 返回累加结果

**关键点：**
- 减法规则只出现在六种情况：IV(4), IX(9), XL(40), XC(90), CD(400), CM(900)
- 通过比较当前字符和下一个字符的大小关系，可以统一处理加法和减法

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是字符串长度，只需遍历一次
- **空间复杂度**：O(1)，哈希表大小固定为 7 个字符

## 相关标签

[哈希表] [数学] [字符串]

## 参考链接

https://leetcode.com/problems/roman-to-integer/

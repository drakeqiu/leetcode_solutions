# 485. Max Consecutive Ones

## 题目描述

Given a binary array `nums`, return the maximum number of consecutive `1`'s in the array.

**Example 1:**
```
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
The maximum number of consecutive 1s is 3.
```

**Example 2:**
```
Input: nums = [1,0,1,1,0,1]
Output: 2
```

**Constraints:**
- `1 <= nums.length <= 10^5`
- `nums[i]` is either `0` or `1`.

## 解题思路

使用单次遍历：用两个变量count和maxCount，count记录当前连续1的个数，maxCount记录最大连续1的个数。遍历数组，遇到1时count加1，遇到0时更新maxCount并重置count。最后再更新一次maxCount处理数组以1结尾的情况。

## 复杂度分析

- 时间复杂度：O(n)，只需遍历一次数组
- 空间复杂度：O(1)，只使用常数额外空间

## 相关标签

[数组] [遍历]

## 参考链接

https://leetcode.com/problems/max-consecutive-ones/

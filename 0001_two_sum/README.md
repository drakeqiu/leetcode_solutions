# 1. Two Sum

## 题目描述

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example 1:**
```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

**Example 2:**
```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

**Example 3:**
```
Input: nums = [3,3], target = 6
Output: [0,1]
```

**Constraints:**
- 2 <= nums.length <= 10^4
- -10^9 <= nums[i] <= 10^9
- -10^9 <= target <= 10^9
- Only one valid answer exists.

## 解题思路

使用哈希表（unordered_map）来存储已经遍历过的数字及其索引。

**算法步骤：**
1. 创建一个哈希表 `numMap` 用于存储数字和对应的索引
2. 遍历数组中的每个元素：
   - 计算当前元素的补数：`complement = target - nums[i]`
   - 在哈希表中查找补数是否存在
   - 如果存在，返回补数的索引和当前索引
   - 如果不存在，将当前数字和索引存入哈希表
3. 如果遍历结束仍未找到，返回空数组（根据题意不会出现这种情况）

**关键点：**
- 使用哈希表可以在 O(1) 时间内查找补数
- 边遍历边查找，避免重复使用同一个元素
- 不需要对数组排序，保持原始索引

## 复杂度分析

- **时间复杂度**：O(n)，其中 n 是数组的长度。只需要遍历一次数组，每次哈希表的查找和插入操作都是 O(1)。
- **空间复杂度**：O(n)，最坏情况下需要将所有元素存入哈希表。

## 相关标签

[数组] [哈希表]

## 参考链接

https://leetcode.com/problems/two-sum/

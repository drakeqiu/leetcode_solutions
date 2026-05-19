# 35. Search Insert Position

## 题目描述

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with `O(log n)` runtime complexity.

**Example 1:**
```
Input: nums = [1,3,5,6], target = 5
Output: 2
```

**Example 2:**
```
Input: nums = [1,3,5,6], target = 2
Output: 1
```

**Example 3:**
```
Input: nums = [1,3,5,6], target = 7
Output: 4
```

**Constraints:**
- 1 <= nums.length <= 10^4
- -10^4 <= nums[i] <= 10^4
- nums contains distinct values sorted in ascending order.
- -10^4 <= target <= 10^4

## 解题思路

使用二分查找算法在有序数组中查找目标值的插入位置。采用左闭右开的区间 [left, right) 进行搜索。

**算法步骤：**
1. 初始化 left = 0，right = nums.size()（右边界不包含）
2. 当 left < right 时：
   - 计算中间位置 mid = left + (right - left) / 2
   - 如果 nums[mid] < target，说明目标在右半部分，left = mid + 1
   - 否则（nums[mid] >= target），说明目标在左半部分或就是 mid，right = mid
3. 循环结束时，left 就是目标应该插入的位置

**关键点：**
- 使用左闭右开区间，right 初始化为 nums.size() 而不是 nums.size() - 1
- 当 nums[mid] >= target 时，right = mid（因为 right 不包含）
- 最终 left 指向第一个 >= target 的位置，如果不存在则指向末尾

## 复杂度分析

- **时间复杂度**：O(log n)，每次迭代将搜索范围减半
- **空间复杂度**：O(1)，只使用常数级别的额外空间

## 相关标签

[数组] [二分查找]

## 参考链接

https://leetcode.com/problems/search-insert-position/
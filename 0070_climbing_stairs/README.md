# 70. Climbing Stairs

## 题目描述

You are climbing a staircase. It takes `n` steps to reach the top.

Each time you can either climb `1` or `2` steps. In how many distinct ways can you climb to the top?

**Example 1:**
```
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
```

**Example 2:**
```
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
```

**Constraints:**
- 1 <= n <= 45

## 解题思路

这是一个经典的动态规划问题，本质上是斐波那契数列。

**思路分析：**
- 要到达第 n 阶，只能从第 n-1 阶（走1步）或第 n-2 阶（走2步）到达
- 因此 dp[n] = dp[n-1] + dp[n-2]
- 边界条件：dp[1] = 1, dp[2] = 2

**算法步骤：**
1. 处理边界情况：n <= 2 时直接返回 n
2. 使用滚动数组优化空间：
   - p 表示 dp[i-2]，初始为 1
   - q 表示 dp[i-1]，初始为 2
3. 从第 3 阶开始遍历到第 n 阶：
   - 计算 r = p + q（当前阶的方法数）
   - 更新 p = q, q = r
4. 返回 q

**关键点：**
- 使用滚动数组将空间复杂度从 O(n) 优化到 O(1)
- 实际上就是计算斐波那契数列的第 n+1 项

## 复杂度分析

- **时间复杂度**：O(n)，需要遍历一次
- **空间复杂度**：O(1)，只使用常数级别的额外空间（滚动数组）

## 相关标签

[动态规划] [数学] [记忆化搜索]

## 参考链接

https://leetcode.com/problems/climbing-stairs/
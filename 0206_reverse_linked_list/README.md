# 206. Reverse Linked List

## 题目描述

Given the head of a singly linked list, reverse the list, and return the reversed list.

**Example 1:**
```
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
```

**Example 2:**
```
Input: head = [1,2]
Output: [2,1]
```

**Example 3:**
```
Input: head = []
Output: []
```

**Constraints:**
- The number of nodes in the list is the range [0, 5000].
- -5000 <= Node.val <= 5000

## 解题思路

### 方法一：迭代

使用三个指针遍历链表，逐个反转节点的指向：

1. `prev`：指向已反转部分的头节点，初始为 `nullptr`
2. `cur`：指向当前处理的节点，初始为 `head`
3. `next`：临时保存下一个节点

每次迭代：
- 保存 `cur->next` 到 `next`
- 将 `cur->next` 指向 `prev`（反转指向）
- 移动 `prev` 和 `cur` 向前

```
初始:    1 -> 2 -> 3 -> 4 -> 5 -> null
         ^
        cur
        prev = null

第1步:   null <- 1    2 -> 3 -> 4 -> 5 -> null
                 ^    ^
               prev  cur

第2步:   null <- 1 <- 2    3 -> 4 -> 5 -> null
                      ^    ^
                    prev  cur
...
最终:    null <- 1 <- 2 <- 3 <- 4 <- 5
                                     ^
                                   prev (返回)
```

### 方法二：递归

递归的思路是先递归到链表末尾，然后在回溯过程中反转指针：

1. **基线条件**：空链表或单节点，直接返回
2. **递归**：先递归反转 `head->next` 之后的链表
3. **回溯时反转**：将 `head->next->next` 指向 `head`，断开 `head->next`

```
reverseList(1 -> 2 -> 3 -> 4 -> 5)
  └─> reverseList(2 -> 3 -> 4 -> 5)
        └─> reverseList(3 -> 4 -> 5)
              └─> reverseList(4 -> 5)
                    └─> reverseList(5) -> 返回 5
                    回溯: 5 -> 4, 4 -> null, 返回 5
              回溯: 4 -> 3, 3 -> null, 返回 5
        回溯: 3 -> 2, 2 -> null, 返回 5
  回溯: 2 -> 1, 1 -> null, 返回 5

最终: 5 -> 4 -> 3 -> 2 -> 1 -> null
```

## 复杂度分析

| 方法 | 时间复杂度 | 空间复杂度 |
|------|-----------|-----------|
| 迭代 | O(n) | O(1) |
| 递归 | O(n) | O(n) 递归栈 |

## 相关标签

[链表] [递归]

## 参考链接

https://leetcode.com/problems/reverse-linked-list/

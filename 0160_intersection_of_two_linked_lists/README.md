# 160. Intersection of Two Linked Lists

## 题目描述

Given the heads of two singly linked-lists `headA` and `headB`, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return `null`.

For example, the following two linked lists begin to intersect at node `c1`:

![Intersection](https://assets.leetcode.com/uploads/2021/03/05/160_statement.png)

The test cases are generated such that there are no cycles anywhere in the entire linked structure.

**Note that the linked lists must retain their original structure after the function returns.**

**Custom Judge:**

The inputs to the judge are given as follows (your program is not given these inputs):

- `intersectVal` - The value of the node where the intersection occurs. This is 0 if there is no intersected node.
- `listA` - The first linked list.
- `listB` - The second linked list.
- `skipA` - The number of nodes to skip ahead in listA (starting from the head) to get to the intersected node.
- `skipB` - The number of nodes to skip ahead in listB (starting from the head) to get to the intersected node.

The judge will then create the linked structure based on these inputs and pass the two heads to your program. If the two linked lists have no intersection, the judge will return `null`, and your program should return `null`.

**Example 1:**
```
Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Intersected at '8'
Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5].
There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.
```

**Example 2:**
```
Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
Output: Intersected at '2'
Explanation: The intersected node's value is 2 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [1,9,1,2,4]. From the head of B, it reads as [3,2,4].
There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.
```

**Example 3:**
```
Input: intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
Output: No intersection
Explanation: The two lists do not intersect.
```

**Constraints:**
- The number of nodes of `listA` is in the `m`.
- The number of nodes of `listB` is in the `n`.
- `1 <= m, n <= 3 * 10^4`
- `1 <= Node.val <= 10^5`
- `0 <= skipA < m`
- `0 <= skipB < n`
- `intersectVal` is `0` if `listA` and `listB` do not intersect.
- `intersectVal == listA[skipA] == listB[skipB]` if `listA` and `listB` intersect.

## 解题思路

使用双指针法找到两个链表的相交节点。

### 双指针法

**核心思想**：
让两个指针分别从两个链表头部开始遍历。当一个指针到达链表末尾时，将它重定向到另一个链表的头部。这样两个指针走过的总路程相同，如果有相交点，它们会在相交点相遇。

**算法步骤**：
1. **边界检查**：如果任一链表为空，直接返回 `nullptr`
2. **初始化指针**：指针 `p` 指向 `headA`，指针 `q` 指向 `headB`
3. **同步遍历**：
   - 当 `p` 和 `q` 不相等时：
     - 如果 `p` 不为空，`p` 移动到下一个节点；如果 `p` 为空，`p` 重定向到 `headB`
     - 如果 `q` 不为空，`q` 移动到下一个节点；如果 `q` 为空，`q` 重定向到 `headA`
4. **返回结果**：
   - 如果有相交点，`p` 和 `q` 会在相交点相遇
   - 如果没有相交点，`p` 和 `q` 会同时为 `nullptr`

**为什么有效**：
设链表 A 的长度为 `lenA`，链表 B 的长度为 `lenB`，相交前的长度分别为 `a` 和 `b`，相交后的长度为 `c`。
- 指针 `p` 的路径：走过 `lenA` 个节点后转向 `headB`，再走过 `b` 个节点到达相交点，总计 `lenA + b = a + c + b`
- 指针 `q` 的路径：走过 `lenB` 个节点后转向 `headA`，再走过 `a` 个节点到达相交点，总计 `lenB + a = b + c + a`
- 两个指针走过的总路程都是 `a + b + c`，因此会在相交点同时到达

**关键点**：
- 利用路径对称性，使两个指针走过相同的总路程
- 不需要预先计算链表长度
- 代码简洁优雅

## 复杂度分析

- **时间复杂度**：O(n + m)，其中 n 和 m 分别是两个链表的长度。最坏情况下，两个指针都需要遍历两个链表一次。
- **空间复杂度**：O(1)，只使用了常数级别的额外空间（两个指针）。

## 相关标签

[链表] [哈希表] [双指针]

## 参考链接

https://leetcode.com/problems/intersection-of-two-linked-lists/

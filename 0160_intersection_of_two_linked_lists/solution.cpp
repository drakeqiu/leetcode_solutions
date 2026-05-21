#include "data_structures.h"

using namespace leetcode;

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        if (!headA || !headB) {
            return nullptr;
        }

        // 双指针法：两个指针分别从两个链表头部开始遍历
        // 当一个指针到达链表末尾时，将它重定向到另一个链表的头部
        // 这样两个指针走过的总路程相同，如果有相交点，它们会在相交点相遇
        ListNode* p = headA;
        ListNode* q = headB;

        while (p != q) {
            // p 到达末尾时转向 headB，否则继续向前
            p = p ? p->next : headB;
            // q 到达末尾时转向 headA，否则继续向前
            q = q ? q->next : headA;
        }

        // 如果有相交点，p 和 q 会在相交点相遇
        // 如果没有相交点，p 和 q 会同时为 nullptr
        return p;
    }
};

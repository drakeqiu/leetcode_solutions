#include "common/data_structures.h"

using namespace leetcode;

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(-1);  // 创建虚拟头节点
        dummy->next = head;
        ListNode* prev = dummy;  // 前驱节点

        while (prev->next) {
            if (prev->next->val == val) {         // 检查节点值是否等于val
                ListNode* toDelete = prev->next;  // 保存要删除的节点
                prev->next = prev->next->next;    // 跳过要删除的节点
                delete toDelete;                  // 释放内存
            } else {
                prev = prev->next;  // 移动到下一个节点
            }
        }

        ListNode* newHead = dummy->next;  // 保存新的头节点
        delete dummy;                     // 释放虚拟头节点
        return newHead;
    }
};

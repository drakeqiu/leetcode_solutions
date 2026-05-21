#include "data_structures.h"

using namespace leetcode;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *res = nullptr, *cur = nullptr, *p = l1, *q = l2;
        while (p != nullptr || q != nullptr || carry > 0) {
            int val1 = p ? p->val : 0;
            int val2 = q ? q->val : 0;
            int total = val1 + val2 + carry;
            int remainder = total % 10;
            carry = total / 10;
            if (!res) {
                res = new ListNode{remainder};
                cur = res;
            } else {
                cur->next = new ListNode{remainder};
                cur = cur->next;
            }
            if (p)
                p = p->next;
            if (q)
                q = q->next;
        }
        return res;
    }
};

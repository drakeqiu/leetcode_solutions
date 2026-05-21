#include "data_structures.h"

using namespace leetcode;

class Solution {
    ListNode* front;

public:
    // 递归版本
    bool isPalindrome(ListNode* head) {
        front = head;
        return isPalindromeRecursive(head);
    }

    // 迭代版本（使用快慢指针和链表反转）
    bool isPalindromeIterative(ListNode* head) {
        if (!head || !head->next) {
            return true;
        }

        // 1. 使用快慢指针找到链表中点
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. 反转后半部分链表
        ListNode* secondHalf = reverseList(slow);
        ListNode* firstHalf = head;

        // 3. 比较前后两部分
        ListNode* p1 = firstHalf;
        ListNode* p2 = secondHalf;
        bool result = true;
        while (p2) {  // 只需要比较到后半部分结束
            if (p1->val != p2->val) {
                result = false;
                break;
            }
            p1 = p1->next;
            p2 = p2->next;
        }

        // 4. 恢复链表（可选，题目不要求）
        reverseList(secondHalf);

        return result;
    }

private:
    bool isPalindromeRecursive(ListNode* cur) {
        if (cur) {
            if (!isPalindromeRecursive(cur->next)) {
                return false;
            }
            if (cur->val != front->val) {
                return false;
            }
            front = front->next;
        }
        return true;
    }

    // 反转链表
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

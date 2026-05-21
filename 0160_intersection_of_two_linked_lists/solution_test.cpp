#include "solution.cpp"

#include <gtest/gtest.h>

using namespace leetcode;

TEST(IntersectionOfTwoLinkedLists, Example1) {
    Solution solution;
    // Create intersected lists
    // ListA: [4,1,8,4,5]
    // ListB: [5,6,1,8,4,5]
    // Intersection: [8,4,5]
    ListNode* common = new ListNode(8, new ListNode(4, new ListNode(5)));
    ListNode* headA = new ListNode(4, new ListNode(1, common));
    ListNode* headB = new ListNode(5, new ListNode(6, new ListNode(1, common)));

    ListNode* result = solution.getIntersectionNode(headA, headB);
    EXPECT_EQ(result, common);
    EXPECT_EQ(result->val, 8);

    // Note: Memory cleanup skipped for intersected lists due to complexity
}

TEST(IntersectionOfTwoLinkedLists, Example2) {
    Solution solution;
    // ListA: [1,9,1,2,4]
    // ListB: [3,2,4]
    // Intersection: [2,4]
    ListNode* common = new ListNode(2, new ListNode(4));
    ListNode* headA = new ListNode(1, new ListNode(9, new ListNode(1, common)));
    ListNode* headB = new ListNode(3, common);

    ListNode* result = solution.getIntersectionNode(headA, headB);
    EXPECT_EQ(result, common);
    EXPECT_EQ(result->val, 2);

    // Note: Memory cleanup skipped for intersected lists
}

TEST(IntersectionOfTwoLinkedLists, Example3) {
    Solution solution;
    // ListA: [2,6,4]
    // ListB: [1,5]
    // No intersection
    ListNode* headA = new ListNode(2, new ListNode(6, new ListNode(4)));
    ListNode* headB = new ListNode(1, new ListNode(5));

    ListNode* result = solution.getIntersectionNode(headA, headB);
    EXPECT_EQ(result, nullptr);

    // Clean up
    delete headA->next->next;
    delete headA->next;
    delete headA;
    delete headB->next;
    delete headB;
}

TEST(IntersectionOfTwoLinkedLists, BothEmpty) {
    Solution solution;
    ListNode* headA = nullptr;
    ListNode* headB = nullptr;

    ListNode* result = solution.getIntersectionNode(headA, headB);
    EXPECT_EQ(result, nullptr);
}

TEST(IntersectionOfTwoLinkedLists, OneEmpty) {
    Solution solution;
    ListNode* headA = new ListNode(1);
    ListNode* headB = nullptr;

    ListNode* result = solution.getIntersectionNode(headA, headB);
    EXPECT_EQ(result, nullptr);

    // Clean up
    delete headA;
}

TEST(IntersectionOfTwoLinkedLists, SameList) {
    Solution solution;
    // Both heads point to the same list
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3)));
    ListNode* headA = head;
    ListNode* headB = head;

    ListNode* result = solution.getIntersectionNode(headA, headB);
    EXPECT_EQ(result, head);
    EXPECT_EQ(result->val, 1);

    // Clean up
    delete head->next->next;
    delete head->next;
    delete head;
}

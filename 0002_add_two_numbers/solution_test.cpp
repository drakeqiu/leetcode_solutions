#include "solution.cpp"

#include <gtest/gtest.h>

using namespace leetcode;

TEST(AddTwoNumbers, Example1) {
    Solution solution;
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Expected: 7 -> 0 -> 8
    EXPECT_EQ(result->val, 7);
    EXPECT_EQ(result->next->val, 0);
    EXPECT_EQ(result->next->next->val, 8);
    EXPECT_EQ(result->next->next->next, nullptr);
}

TEST(AddTwoNumbers, Example2) {
    Solution solution;
    ListNode* l1 = new ListNode(0);
    ListNode* l2 = new ListNode(0);
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Expected: 0
    EXPECT_EQ(result->val, 0);
    EXPECT_EQ(result->next, nullptr);
}

TEST(AddTwoNumbers, Example3) {
    Solution solution;
    ListNode* l1 = new ListNode(
        9, new ListNode(
               9, new ListNode(
                      9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9)))))));
    ListNode* l2 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Expected: 8 -> 9 -> 9 -> 9 -> 0 -> 0 -> 0 -> 1
    EXPECT_EQ(result->val, 8);
    EXPECT_EQ(result->next->val, 9);
    EXPECT_EQ(result->next->next->val, 9);
    EXPECT_EQ(result->next->next->next->val, 9);
    EXPECT_EQ(result->next->next->next->next->val, 0);
    EXPECT_EQ(result->next->next->next->next->next->val, 0);
    EXPECT_EQ(result->next->next->next->next->next->next->val, 0);
    EXPECT_EQ(result->next->next->next->next->next->next->next->val, 1);
    EXPECT_EQ(result->next->next->next->next->next->next->next->next, nullptr);
}

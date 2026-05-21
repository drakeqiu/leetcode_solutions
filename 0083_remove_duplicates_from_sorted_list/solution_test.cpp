#include "solution.cpp"

#include <gtest/gtest.h>

using namespace leetcode;

TEST(RemoveDuplicatesFromSortedList, Example1) {
    Solution solution;
    ListNode* head = new ListNode(1, new ListNode(1, new ListNode(2)));
    ListNode* result = solution.deleteDuplicates(head);

    // Expected: 1 -> 2
    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next->val, 2);
    EXPECT_EQ(result->next->next, nullptr);
}

TEST(RemoveDuplicatesFromSortedList, Example2) {
    Solution solution;
    ListNode* head =
        new ListNode(1, new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(3)))));
    ListNode* result = solution.deleteDuplicates(head);

    // Expected: 1 -> 2 -> 3
    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next->val, 2);
    EXPECT_EQ(result->next->next->val, 3);
    EXPECT_EQ(result->next->next->next, nullptr);
}

TEST(RemoveDuplicatesFromSortedList, EmptyList) {
    Solution solution;
    ListNode* head = nullptr;
    ListNode* result = solution.deleteDuplicates(head);

    EXPECT_EQ(result, nullptr);
}

TEST(RemoveDuplicatesFromSortedList, SingleNode) {
    Solution solution;
    ListNode* head = new ListNode(1);
    ListNode* result = solution.deleteDuplicates(head);

    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next, nullptr);
}

TEST(RemoveDuplicatesFromSortedList, NoDuplicates) {
    Solution solution;
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3)));
    ListNode* result = solution.deleteDuplicates(head);

    // Expected: 1 -> 2 -> 3
    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->next->val, 2);
    EXPECT_EQ(result->next->next->val, 3);
    EXPECT_EQ(result->next->next->next, nullptr);
}

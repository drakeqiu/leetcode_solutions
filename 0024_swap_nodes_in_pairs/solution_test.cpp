#include "solution.cpp"

#include <gtest/gtest.h>

#include <vector>

TEST(SwapNodesInPairs, Example1) {
    Solution solution;
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
    ListNode* result = solution.swapPairs(head);

    // Expected: [2,1,4,3]
    std::vector<int> expected = {2, 1, 4, 3};
    std::vector<int> actual;
    ListNode* curr = result;
    while (curr) {
        actual.push_back(curr->val);
        curr = curr->next;
    }
    EXPECT_EQ(actual, expected);

    // Clean up
    curr = result;
    while (curr) {
        ListNode* temp = curr;
        curr = curr->next;
        delete temp;
    }
}

TEST(SwapNodesInPairs, Example2) {
    Solution solution;
    ListNode* head = nullptr;
    ListNode* result = solution.swapPairs(head);

    EXPECT_EQ(result, nullptr);
}

TEST(SwapNodesInPairs, Example3) {
    Solution solution;
    ListNode* head = new ListNode(1);
    ListNode* result = solution.swapPairs(head);

    // Expected: [1]
    std::vector<int> expected = {1};
    std::vector<int> actual;
    ListNode* curr = result;
    while (curr) {
        actual.push_back(curr->val);
        curr = curr->next;
    }
    EXPECT_EQ(actual, expected);

    // Clean up
    curr = result;
    while (curr) {
        ListNode* temp = curr;
        curr = curr->next;
        delete temp;
    }
}

#include "solution.cpp"

#include <gtest/gtest.h>

TEST(MergeTwoSortedLists, Example1) {
    Solution solution;
    ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
    ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode* result = solution.mergeTwoLists(list1, list2);

    // Expected: [1,1,2,3,4,4]
    std::vector<int> expected = {1, 1, 2, 3, 4, 4};
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

TEST(MergeTwoSortedLists, Example2) {
    Solution solution;
    ListNode* list1 = nullptr;
    ListNode* list2 = nullptr;
    ListNode* result = solution.mergeTwoLists(list1, list2);

    EXPECT_EQ(result, nullptr);
}

TEST(MergeTwoSortedLists, Example3) {
    Solution solution;
    ListNode* list1 = nullptr;
    ListNode* list2 = new ListNode(0);
    ListNode* result = solution.mergeTwoLists(list1, list2);

    // Expected: [0]
    std::vector<int> expected = {0};
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

TEST(MergeTwoSortedLists, OneListEmpty) {
    Solution solution;
    ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(3)));
    ListNode* list2 = nullptr;
    ListNode* result = solution.mergeTwoLists(list1, list2);

    // Expected: [1,2,3]
    std::vector<int> expected = {1, 2, 3};
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
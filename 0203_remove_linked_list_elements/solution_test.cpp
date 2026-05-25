#include "solution.cpp"

#include <gtest/gtest.h>

#include "common/test_utils.h"

TEST(RemoveLinkedListElements, Example1) {
    Solution solution;
    vector<int> nums = {1, 2, 6, 3, 4, 5, 6};
    int val = 6;
    ListNode* head = createList(nums);
    ListNode* result = solution.removeElements(head, val);
    vector<int> expected = {1, 2, 3, 4, 5};
    EXPECT_EQ(listToVector(result), expected);
    freeList(result);
}

TEST(RemoveLinkedListElements, Example2) {
    Solution solution;
    vector<int> nums = {};
    int val = 1;
    ListNode* head = createList(nums);
    ListNode* result = solution.removeElements(head, val);
    vector<int> expected = {};
    EXPECT_EQ(listToVector(result), expected);
    freeList(result);
}

TEST(RemoveLinkedListElements, Example3) {
    Solution solution;
    vector<int> nums = {7, 7, 7, 7};
    int val = 7;
    ListNode* head = createList(nums);
    ListNode* result = solution.removeElements(head, val);
    vector<int> expected = {};
    EXPECT_EQ(listToVector(result), expected);
    freeList(result);
}

TEST(RemoveLinkedListElements, EdgeCaseHeadOnly) {
    Solution solution;
    vector<int> nums = {1};
    int val = 1;
    ListNode* head = createList(nums);
    ListNode* result = solution.removeElements(head, val);
    vector<int> expected = {};
    EXPECT_EQ(listToVector(result), expected);
    freeList(result);
}

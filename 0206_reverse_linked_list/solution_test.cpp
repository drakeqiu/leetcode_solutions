#include <gtest/gtest.h>
#include "solution.cpp"
#include "test_utils.h"

using namespace leetcode;

TEST(ReverseList, Example1) {
    Solution solution;
    ListNode* head = createList({1, 2, 3, 4, 5});
    ListNode* result = solution.reverseList(head);
    EXPECT_EQ(listToVector(result), std::vector<int>({5, 4, 3, 2, 1}));
    deleteList(result);
}

TEST(ReverseList, Example2) {
    Solution solution;
    ListNode* head = createList({1, 2});
    ListNode* result = solution.reverseList(head);
    EXPECT_EQ(listToVector(result), std::vector<int>({2, 1}));
    deleteList(result);
}

TEST(ReverseList, EmptyList) {
    Solution solution;
    ListNode* result = solution.reverseList(nullptr);
    EXPECT_EQ(result, nullptr);
}

TEST(ReverseList, SingleNode) {
    Solution solution;
    ListNode* head = createList({1});
    ListNode* result = solution.reverseList(head);
    EXPECT_EQ(listToVector(result), std::vector<int>({1}));
    deleteList(result);
}

// 递归解法测试
TEST(ReverseListRecursive, Example1) {
    Solution solution;
    ListNode* head = createList({1, 2, 3, 4, 5});
    ListNode* result = solution.reverseListRecursive(head);
    EXPECT_EQ(listToVector(result), std::vector<int>({5, 4, 3, 2, 1}));
    deleteList(result);
}

TEST(ReverseListRecursive, Example2) {
    Solution solution;
    ListNode* head = createList({1, 2});
    ListNode* result = solution.reverseListRecursive(head);
    EXPECT_EQ(listToVector(result), std::vector<int>({2, 1}));
    deleteList(result);
}

TEST(ReverseListRecursive, EmptyList) {
    Solution solution;
    ListNode* result = solution.reverseListRecursive(nullptr);
    EXPECT_EQ(result, nullptr);
}

TEST(ReverseListRecursive, SingleNode) {
    Solution solution;
    ListNode* head = createList({1});
    ListNode* result = solution.reverseListRecursive(head);
    EXPECT_EQ(listToVector(result), std::vector<int>({1}));
    deleteList(result);
}

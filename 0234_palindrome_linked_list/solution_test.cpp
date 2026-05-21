#include "solution.cpp"

#include <gtest/gtest.h>

using namespace leetcode;

TEST(PalindromeLinkedList, Example1) {
    Solution solution;
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(2, new ListNode(1))));
    bool result = solution.isPalindrome(head);
    EXPECT_TRUE(result);

    // Clean up
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;
}

TEST(PalindromeLinkedList, Example2) {
    Solution solution;
    ListNode* head = new ListNode(1, new ListNode(2));
    bool result = solution.isPalindrome(head);
    EXPECT_FALSE(result);

    // Clean up
    delete head->next;
    delete head;
}

TEST(PalindromeLinkedList, EmptyList) {
    Solution solution;
    ListNode* head = nullptr;
    bool result = solution.isPalindrome(head);
    EXPECT_TRUE(result);
}

TEST(PalindromeLinkedList, SingleNode) {
    Solution solution;
    ListNode* head = new ListNode(1);
    bool result = solution.isPalindrome(head);
    EXPECT_TRUE(result);

    // Clean up
    delete head;
}

TEST(PalindromeLinkedList, OddLength) {
    Solution solution;
    ListNode* head =
        new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(2, new ListNode(1)))));
    bool result = solution.isPalindrome(head);
    EXPECT_TRUE(result);

    // Clean up
    delete head->next->next->next->next;
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;
}

// 迭代版本测试
TEST(PalindromeLinkedListIterative, Example1) {
    Solution solution;
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(2, new ListNode(1))));
    bool result = solution.isPalindromeIterative(head);
    EXPECT_TRUE(result);

    // Clean up
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;
}

TEST(PalindromeLinkedListIterative, Example2) {
    Solution solution;
    ListNode* head = new ListNode(1, new ListNode(2));
    bool result = solution.isPalindromeIterative(head);
    EXPECT_FALSE(result);

    // Clean up
    delete head->next;
    delete head;
}

TEST(PalindromeLinkedListIterative, EmptyList) {
    Solution solution;
    ListNode* head = nullptr;
    bool result = solution.isPalindromeIterative(head);
    EXPECT_TRUE(result);
}

TEST(PalindromeLinkedListIterative, SingleNode) {
    Solution solution;
    ListNode* head = new ListNode(1);
    bool result = solution.isPalindromeIterative(head);
    EXPECT_TRUE(result);

    // Clean up
    delete head;
}

TEST(PalindromeLinkedListIterative, OddLength) {
    Solution solution;
    ListNode* head =
        new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(2, new ListNode(1)))));
    bool result = solution.isPalindromeIterative(head);
    EXPECT_TRUE(result);

    // Clean up
    delete head->next->next->next->next;
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;
}

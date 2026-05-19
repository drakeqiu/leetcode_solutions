#include "solution.cpp"

#include <gtest/gtest.h>

TEST(LinkedListCycle, Example1) {
    Solution solution;
    ListNode* head = new ListNode(3);
    ListNode* node1 = new ListNode(2);
    ListNode* node2 = new ListNode(0);
    ListNode* node3 = new ListNode(-4);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node1;  // Create cycle
    EXPECT_TRUE(solution.hasCycle(head));

    // Clean up (break cycle first)
    node3->next = nullptr;
    delete node3;
    delete node2;
    delete node1;
    delete head;
}

TEST(LinkedListCycle, Example2) {
    Solution solution;
    ListNode* head = new ListNode(1);
    ListNode* node1 = new ListNode(2);
    head->next = node1;
    node1->next = head;  // Create cycle
    EXPECT_TRUE(solution.hasCycle(head));

    // Clean up (break cycle first)
    node1->next = nullptr;
    delete node1;
    delete head;
}

TEST(LinkedListCycle, Example3) {
    Solution solution;
    ListNode* head = new ListNode(1);
    EXPECT_FALSE(solution.hasCycle(head));
    delete head;
}

TEST(LinkedListCycle, NoCycle) {
    Solution solution;
    ListNode* head = new ListNode(1);
    ListNode* node1 = new ListNode(2);
    ListNode* node2 = new ListNode(3);
    head->next = node1;
    node1->next = node2;
    node2->next = nullptr;
    EXPECT_FALSE(solution.hasCycle(head));

    // Clean up
    delete node2;
    delete node1;
    delete head;
}

TEST(LinkedListCycle, Empty) {
    Solution solution;
    EXPECT_FALSE(solution.hasCycle(nullptr));
}
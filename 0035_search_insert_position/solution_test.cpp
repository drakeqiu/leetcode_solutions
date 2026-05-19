#include "solution.cpp"

#include <gtest/gtest.h>

TEST(SearchInsertPosition, Example1) {
    Solution solution;
    vector<int> nums = {1, 3, 5, 6};
    EXPECT_EQ(solution.searchInsert(nums, 5), 2);
}

TEST(SearchInsertPosition, Example2) {
    Solution solution;
    vector<int> nums = {1, 3, 5, 6};
    EXPECT_EQ(solution.searchInsert(nums, 2), 1);
}

TEST(SearchInsertPosition, Example3) {
    Solution solution;
    vector<int> nums = {1, 3, 5, 6};
    EXPECT_EQ(solution.searchInsert(nums, 7), 4);
}

TEST(SearchInsertPosition, InsertAtBeginning) {
    Solution solution;
    vector<int> nums = {1, 3, 5, 6};
    EXPECT_EQ(solution.searchInsert(nums, 0), 0);
}

TEST(SearchInsertPosition, SingleElement) {
    Solution solution;
    vector<int> nums = {1};
    EXPECT_EQ(solution.searchInsert(nums, 1), 0);
    EXPECT_EQ(solution.searchInsert(nums, 0), 0);
    EXPECT_EQ(solution.searchInsert(nums, 2), 1);
}

#include "solution.cpp"

#include <gtest/gtest.h>

TEST(BinarySearch, Example1) {
    Solution solution;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    EXPECT_EQ(solution.search(nums, target), 4);
}

TEST(BinarySearch, Example2) {
    Solution solution;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 2;
    EXPECT_EQ(solution.search(nums, target), -1);
}

TEST(BinarySearch, SingleElementFound) {
    Solution solution;
    vector<int> nums = {5};
    int target = 5;
    EXPECT_EQ(solution.search(nums, target), 0);
}

TEST(BinarySearch, SingleElementNotFound) {
    Solution solution;
    vector<int> nums = {5};
    int target = 3;
    EXPECT_EQ(solution.search(nums, target), -1);
}

TEST(BinarySearch, TargetAtBeginning) {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 1;
    EXPECT_EQ(solution.search(nums, target), 0);
}

TEST(BinarySearch, TargetAtEnd) {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 5;
    EXPECT_EQ(solution.search(nums, target), 4);
}

TEST(BinarySearch, NegativeNumbers) {
    Solution solution;
    vector<int> nums = {-10, -5, 0, 5, 10};
    int target = -5;
    EXPECT_EQ(solution.search(nums, target), 1);
}

#include "solution.cpp"

#include <gtest/gtest.h>

TEST(TwoSum, Example1) {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> expected = {0, 1};
    EXPECT_EQ(solution.twoSum(nums, target), expected);
}

TEST(TwoSum, Example2) {
    Solution solution;
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> expected = {1, 2};
    EXPECT_EQ(solution.twoSum(nums, target), expected);
}

TEST(TwoSum, Example3) {
    Solution solution;
    vector<int> nums = {3, 3};
    int target = 6;
    vector<int> expected = {0, 1};
    EXPECT_EQ(solution.twoSum(nums, target), expected);
}

TEST(TwoSum, NegativeNumbers) {
    Solution solution;
    vector<int> nums = {-1, -2, -3, -4, -5};
    int target = -8;
    vector<int> expected = {2, 4};
    EXPECT_EQ(solution.twoSum(nums, target), expected);
}

TEST(TwoSum, MixedNumbers) {
    Solution solution;
    vector<int> nums = {-3, 4, 3, 90};
    int target = 0;
    vector<int> expected = {0, 2};
    EXPECT_EQ(solution.twoSum(nums, target), expected);
}

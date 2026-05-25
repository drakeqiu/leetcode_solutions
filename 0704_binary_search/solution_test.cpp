#include "solution.cpp"

#include <gtest/gtest.h>

// LeetCode 示例测试用例 1
TEST(BinarySearch, Example1) {
    Solution solution;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    EXPECT_EQ(solution.search(nums, target), 4);
}

// LeetCode 示例测试用例 2
TEST(BinarySearch, Example2) {
    Solution solution;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 2;
    EXPECT_EQ(solution.search(nums, target), -1);
}

// 边界条件测试：单元素数组 - 找到目标
TEST(BinarySearch, SingleElementFound) {
    Solution solution;
    vector<int> nums = {5};
    int target = 5;
    EXPECT_EQ(solution.search(nums, target), 0);
}

// 边界条件测试：单元素数组 - 未找到目标
TEST(BinarySearch, SingleElementNotFound) {
    Solution solution;
    vector<int> nums = {5};
    int target = 3;
    EXPECT_EQ(solution.search(nums, target), -1);
}

// 边界条件测试：目标在数组开头
TEST(BinarySearch, TargetAtBeginning) {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 1;
    EXPECT_EQ(solution.search(nums, target), 0);
}

// 边界条件测试：目标在数组末尾
TEST(BinarySearch, TargetAtEnd) {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 5;
    EXPECT_EQ(solution.search(nums, target), 4);
}

// 边界条件测试：包含负数的数组
TEST(BinarySearch, NegativeNumbers) {
    Solution solution;
    vector<int> nums = {-10, -5, 0, 5, 10};
    int target = -5;
    EXPECT_EQ(solution.search(nums, target), 1);
}

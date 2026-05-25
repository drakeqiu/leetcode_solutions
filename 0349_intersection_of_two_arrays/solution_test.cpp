#include "solution.cpp"

#include <gtest/gtest.h>

#include <algorithm>

// LeetCode 示例测试用例 1
TEST(IntersectionOfTwoArrays, Example1) {
    Solution solution;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = solution.intersection(nums1, nums2);
    sort(result.begin(), result.end());  // 排序以处理无序结果
    vector<int> expected = {2};
    EXPECT_EQ(result, expected);
}

// LeetCode 示例测试用例 2
TEST(IntersectionOfTwoArrays, Example2) {
    Solution solution;
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    vector<int> result = solution.intersection(nums1, nums2);
    sort(result.begin(), result.end());  // 排序以处理无序结果
    vector<int> expected = {4, 9};
    EXPECT_EQ(result, expected);
}

// 边界条件测试：两个数组没有交集
TEST(IntersectionOfTwoArrays, EmptyIntersection) {
    Solution solution;
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {4, 5, 6};
    vector<int> result = solution.intersection(nums1, nums2);
    sort(result.begin(), result.end());
    vector<int> expected = {};
    EXPECT_EQ(result, expected);
}

// 边界条件测试：两个数组都只有一个元素且相同
TEST(IntersectionOfTwoArrays, SingleElementIntersection) {
    Solution solution;
    vector<int> nums1 = {1};
    vector<int> nums2 = {1};
    vector<int> result = solution.intersection(nums1, nums2);
    sort(result.begin(), result.end());
    vector<int> expected = {1};
    EXPECT_EQ(result, expected);
}

// 边界条件测试：两个数组都有重复元素
TEST(IntersectionOfTwoArrays, DuplicatesInBothArrays) {
    Solution solution;
    vector<int> nums1 = {1, 1, 2, 2, 3};
    vector<int> nums2 = {1, 2, 2, 3, 3};
    vector<int> result = solution.intersection(nums1, nums2);
    sort(result.begin(), result.end());  // 排序以处理无序结果
    vector<int> expected = {1, 2, 3};
    EXPECT_EQ(result, expected);
}

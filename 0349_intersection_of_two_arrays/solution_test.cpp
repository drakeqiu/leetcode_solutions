#include "solution.cpp"

#include <gtest/gtest.h>

TEST(IntersectionOfTwoArrays, Example1) {
    Solution solution;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = solution.intersection(nums1, nums2);
    vector<int> expected = {2};
    EXPECT_EQ(result, expected);
}

TEST(IntersectionOfTwoArrays, Example2) {
    Solution solution;
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    vector<int> result = solution.intersection(nums1, nums2);
    vector<int> expected = {9, 4};
    EXPECT_EQ(result, expected);
}

TEST(IntersectionOfTwoArrays, EmptyIntersection) {
    Solution solution;
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {4, 5, 6};
    vector<int> result = solution.intersection(nums1, nums2);
    vector<int> expected = {};
    EXPECT_EQ(result, expected);
}

TEST(IntersectionOfTwoArrays, SingleElementIntersection) {
    Solution solution;
    vector<int> nums1 = {1};
    vector<int> nums2 = {1};
    vector<int> result = solution.intersection(nums1, nums2);
    vector<int> expected = {1};
    EXPECT_EQ(result, expected);
}

TEST(IntersectionOfTwoArrays, DuplicatesInBothArrays) {
    Solution solution;
    vector<int> nums1 = {1, 1, 2, 2, 3};
    vector<int> nums2 = {1, 2, 2, 3, 3};
    vector<int> result = solution.intersection(nums1, nums2);
    vector<int> expected = {1, 2, 3};
    EXPECT_EQ(result, expected);
}

#include "solution.cpp"

#include <gtest/gtest.h>

#include <vector>

using namespace std;

TEST(MaxConsecutiveOnes, Example1) {
    Solution solution;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    EXPECT_EQ(solution.findMaxConsecutiveOnes(nums), 3);
}

TEST(MaxConsecutiveOnes, Example2) {
    Solution solution;
    vector<int> nums = {1, 0, 1, 1, 0, 1};
    EXPECT_EQ(solution.findMaxConsecutiveOnes(nums), 2);
}

TEST(MaxConsecutiveOnes, EdgeCaseAllOnes) {
    Solution solution;
    vector<int> nums = {1, 1, 1, 1};
    EXPECT_EQ(solution.findMaxConsecutiveOnes(nums), 4);
}

TEST(MaxConsecutiveOnes, EdgeCaseAllZeros) {
    Solution solution;
    vector<int> nums = {0, 0, 0};
    EXPECT_EQ(solution.findMaxConsecutiveOnes(nums), 0);
}

TEST(MaxConsecutiveOnes, EdgeCaseSingleElement) {
    Solution solution;
    vector<int> nums = {1};
    EXPECT_EQ(solution.findMaxConsecutiveOnes(nums), 1);
}

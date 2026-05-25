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

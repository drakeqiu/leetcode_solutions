#include "solution.cpp"

#include <gtest/gtest.h>

#include <climits>

TEST(HammingDistance, Example1) {
    Solution solution;
    EXPECT_EQ(solution.hammingDistance(1, 4), 2);
}

TEST(HammingDistance, Example2) {
    Solution solution;
    EXPECT_EQ(solution.hammingDistance(3, 1), 1);
}

TEST(HammingDistance, EdgeCaseSameNumbers) {
    Solution solution;
    EXPECT_EQ(solution.hammingDistance(0, 0), 0);
}

TEST(HammingDistance, EdgeCaseMaxNumbers) {
    Solution solution;
    EXPECT_EQ(solution.hammingDistance(INT_MAX, INT_MAX), 0);
}

TEST(HammingDistance, EdgeCaseOneZero) {
    Solution solution;
    EXPECT_EQ(solution.hammingDistance(0, 1), 1);
}

#include "solution.cpp"

#include <gtest/gtest.h>

TEST(PowerOfTwo, Example1) {
    Solution solution;
    int n = 1;
    EXPECT_TRUE(solution.isPowerOfTwo(n));
}

TEST(PowerOfTwo, Example2) {
    Solution solution;
    int n = 16;
    EXPECT_TRUE(solution.isPowerOfTwo(n));
}

TEST(PowerOfTwo, Example3) {
    Solution solution;
    int n = 3;
    EXPECT_FALSE(solution.isPowerOfTwo(n));
}

TEST(PowerOfTwo, EdgeCaseZero) {
    Solution solution;
    int n = 0;
    EXPECT_FALSE(solution.isPowerOfTwo(n));
}

TEST(PowerOfTwo, EdgeCaseNegative) {
    Solution solution;
    int n = -16;
    EXPECT_FALSE(solution.isPowerOfTwo(n));
}

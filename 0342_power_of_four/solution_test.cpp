#include "solution.cpp"

#include <gtest/gtest.h>

TEST(PowerOfFour, Example1) {
    Solution solution;
    EXPECT_EQ(solution.isPowerOfFour(16), true);
}

TEST(PowerOfFour, Example2) {
    Solution solution;
    EXPECT_EQ(solution.isPowerOfFour(5), false);
}

TEST(PowerOfFour, Example3) {
    Solution solution;
    EXPECT_EQ(solution.isPowerOfFour(1), true);
}

TEST(PowerOfFour, EdgeCaseZero) {
    Solution solution;
    EXPECT_EQ(solution.isPowerOfFour(0), false);
}

TEST(PowerOfFour, EdgeCaseNegative) {
    Solution solution;
    EXPECT_EQ(solution.isPowerOfFour(-4), false);
}

TEST(PowerOfFour, EdgeCaseLargeNumber) {
    Solution solution;
    EXPECT_EQ(solution.isPowerOfFour(64), true);  // 4^3
}

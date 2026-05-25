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

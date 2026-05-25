#include "solution.cpp"

#include <gtest/gtest.h>

TEST(PerfectNumber, Example1) {
    Solution solution;
    EXPECT_EQ(solution.checkPerfectNumber(28), true);
}

TEST(PerfectNumber, Example2) {
    Solution solution;
    EXPECT_EQ(solution.checkPerfectNumber(7), false);
}

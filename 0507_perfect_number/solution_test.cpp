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

TEST(PerfectNumber, EdgeCaseOne) {
    Solution solution;
    EXPECT_EQ(solution.checkPerfectNumber(1), false);
}

TEST(PerfectNumber, EdgeCaseSix) {
    Solution solution;
    EXPECT_EQ(solution.checkPerfectNumber(6), true);  // 6 = 1 + 2 + 3
}

TEST(PerfectNumber, EdgeCaseLargeNumber) {
    Solution solution;
    EXPECT_EQ(solution.checkPerfectNumber(496), true);  // 另一个完全数
}

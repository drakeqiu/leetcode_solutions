#include "solution.cpp"

#include <gtest/gtest.h>

TEST(ClimbingStairs, Example1) {
    Solution solution;
    EXPECT_EQ(solution.climbStairs(2), 2);
}

TEST(ClimbingStairs, Example2) {
    Solution solution;
    EXPECT_EQ(solution.climbStairs(3), 3);
}

TEST(ClimbingStairs, SingleStep) {
    Solution solution;
    EXPECT_EQ(solution.climbStairs(1), 1);
}

TEST(ClimbingStairs, FourSteps) {
    Solution solution;
    EXPECT_EQ(solution.climbStairs(4), 5);
}

TEST(ClimbingStairs, FiveSteps) {
    Solution solution;
    EXPECT_EQ(solution.climbStairs(5), 8);
}
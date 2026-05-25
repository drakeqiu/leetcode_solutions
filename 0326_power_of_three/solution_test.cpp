#include "solution.cpp"

#include <gtest/gtest.h>

TEST(PowerOfThree, Example1) {
    Solution solution;
    int n = 27;
    EXPECT_TRUE(solution.isPowerOfThree(n));
}

TEST(PowerOfThree, Example2) {
    Solution solution;
    int n = 0;
    EXPECT_FALSE(solution.isPowerOfThree(n));
}

TEST(PowerOfThree, Example3) {
    Solution solution;
    int n = -1;
    EXPECT_FALSE(solution.isPowerOfThree(n));
}

TEST(PowerOfThree, AdditionalTest1) {
    Solution solution;
    int n = 9;
    EXPECT_TRUE(solution.isPowerOfThree(n));
}

TEST(PowerOfThree, AdditionalTest2) {
    Solution solution;
    int n = 45;
    EXPECT_FALSE(solution.isPowerOfThree(n));
}

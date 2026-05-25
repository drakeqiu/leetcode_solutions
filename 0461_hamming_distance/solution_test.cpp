#include "solution.cpp"

#include <gtest/gtest.h>

TEST(HammingDistance, Example1) {
    Solution solution;
    EXPECT_EQ(solution.hammingDistance(1, 4), 2);
}

TEST(HammingDistance, Example2) {
    Solution solution;
    EXPECT_EQ(solution.hammingDistance(3, 1), 1);
}

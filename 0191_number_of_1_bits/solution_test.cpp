#include "solution.cpp"

#include <gtest/gtest.h>

TEST(NumberOf1Bits, Example1) {
    Solution solution;
    uint32_t n = 11;
    EXPECT_EQ(solution.hammingWeight(n), 3);
}

TEST(NumberOf1Bits, Example2) {
    Solution solution;
    uint32_t n = 128;
    EXPECT_EQ(solution.hammingWeight(n), 1);
}

TEST(NumberOf1Bits, Example3) {
    Solution solution;
    uint32_t n = 2147483645;
    EXPECT_EQ(solution.hammingWeight(n), 30);
}

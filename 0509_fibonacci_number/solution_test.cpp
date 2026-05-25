#include "solution.cpp"

#include <gtest/gtest.h>

TEST(FibonacciNumber, Example1) {
    Solution solution;
    EXPECT_EQ(solution.fib(2), 1);
}

TEST(FibonacciNumber, Example2) {
    Solution solution;
    EXPECT_EQ(solution.fib(3), 2);
}

TEST(FibonacciNumber, Example3) {
    Solution solution;
    EXPECT_EQ(solution.fib(4), 3);
}

TEST(FibonacciNumber, BaseCase0) {
    Solution solution;
    EXPECT_EQ(solution.fib(0), 0);
}

TEST(FibonacciNumber, BaseCase1) {
    Solution solution;
    EXPECT_EQ(solution.fib(1), 1);
}

TEST(FibonacciNumber, LargerNumber) {
    Solution solution;
    EXPECT_EQ(solution.fib(10), 55);
}

TEST(FibonacciNumber, MaxConstraint) {
    Solution solution;
    EXPECT_EQ(solution.fib(30), 832040);
}

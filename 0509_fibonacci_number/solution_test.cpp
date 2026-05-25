#include "solution.cpp"

#include <gtest/gtest.h>

// LeetCode 示例测试用例 1
TEST(FibonacciNumber, Example1) {
    Solution solution;
    EXPECT_EQ(solution.fib(2), 1);
}

// LeetCode 示例测试用例 2
TEST(FibonacciNumber, Example2) {
    Solution solution;
    EXPECT_EQ(solution.fib(3), 2);
}

// LeetCode 示例测试用例 3
TEST(FibonacciNumber, Example3) {
    Solution solution;
    EXPECT_EQ(solution.fib(4), 3);
}

// 边界条件测试：F(0) = 0
TEST(FibonacciNumber, BaseCase0) {
    Solution solution;
    EXPECT_EQ(solution.fib(0), 0);
}

// 边界条件测试：F(1) = 1
TEST(FibonacciNumber, BaseCase1) {
    Solution solution;
    EXPECT_EQ(solution.fib(1), 1);
}

// 边界条件测试：较大的数字
TEST(FibonacciNumber, LargerNumber) {
    Solution solution;
    EXPECT_EQ(solution.fib(10), 55);
}

// 边界条件测试：最大约束值
TEST(FibonacciNumber, MaxConstraint) {
    Solution solution;
    EXPECT_EQ(solution.fib(30), 832040);
}

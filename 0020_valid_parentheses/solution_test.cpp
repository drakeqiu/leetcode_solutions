#include "solution.cpp"

#include <gtest/gtest.h>

TEST(ValidParentheses, Example1) {
    Solution solution;
    EXPECT_TRUE(solution.isValid("()"));
}

TEST(ValidParentheses, Example2) {
    Solution solution;
    EXPECT_TRUE(solution.isValid("()[]{}"));
}

TEST(ValidParentheses, Example3) {
    Solution solution;
    EXPECT_FALSE(solution.isValid("(]"));
}

TEST(ValidParentheses, Nested) {
    Solution solution;
    EXPECT_TRUE(solution.isValid("{[]}"));
}

TEST(ValidParentheses, InvalidNested) {
    Solution solution;
    EXPECT_FALSE(solution.isValid("([)]"));
}

TEST(ValidParentheses, SingleChar) {
    Solution solution;
    EXPECT_FALSE(solution.isValid("("));
    EXPECT_FALSE(solution.isValid(")"));
}

TEST(ValidParentheses, Empty) {
    Solution solution;
    EXPECT_TRUE(solution.isValid(""));
}
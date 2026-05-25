#include "solution.cpp"

#include <gtest/gtest.h>

TEST(ReverseVowelsOfAString, Example1) {
    Solution solution;
    EXPECT_EQ(solution.reverseVowels("hello"), "holle");
}

TEST(ReverseVowelsOfAString, Example2) {
    Solution solution;
    EXPECT_EQ(solution.reverseVowels("leetcode"), "leotcede");
}

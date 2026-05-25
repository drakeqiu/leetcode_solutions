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

TEST(ReverseVowelsOfAString, EdgeCaseNoVowels) {
    Solution solution;
    EXPECT_EQ(solution.reverseVowels("xyz"), "xyz");
}

TEST(ReverseVowelsOfAString, EdgeCaseAllVowels) {
    Solution solution;
    EXPECT_EQ(solution.reverseVowels("aeiou"), "uoiea");
}

TEST(ReverseVowelsOfAString, EdgeCaseSingleChar) {
    Solution solution;
    EXPECT_EQ(solution.reverseVowels("a"), "a");
}

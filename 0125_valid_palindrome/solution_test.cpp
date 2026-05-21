#include "solution.cpp"

#include <gtest/gtest.h>

TEST(ValidPalindrome, Example1) {
    Solution solution;
    string s = "A man, a plan, a canal: Panama";
    EXPECT_TRUE(solution.isPalindrome(s));
}

TEST(ValidPalindrome, Example2) {
    Solution solution;
    string s = "race a car";
    EXPECT_FALSE(solution.isPalindrome(s));
}

TEST(ValidPalindrome, Example3) {
    Solution solution;
    string s = " ";
    EXPECT_TRUE(solution.isPalindrome(s));
}

TEST(ValidPalindrome, EmptyString) {
    Solution solution;
    string s = "";
    EXPECT_TRUE(solution.isPalindrome(s));
}

TEST(ValidPalindrome, SingleCharacter) {
    Solution solution;
    string s = "a";
    EXPECT_TRUE(solution.isPalindrome(s));
}

TEST(ValidPalindrome, WithNumbers) {
    Solution solution;
    string s = "0P";
    EXPECT_FALSE(solution.isPalindrome(s));
}

#include "solution.cpp"

#include <gtest/gtest.h>

TEST(PalindromeNumber, Example1) {
    Solution solution;
    EXPECT_TRUE(solution.isPalindrome(121));
}

TEST(PalindromeNumber, Example2) {
    Solution solution;
    EXPECT_FALSE(solution.isPalindrome(-121));
}

TEST(PalindromeNumber, Example3) {
    Solution solution;
    EXPECT_FALSE(solution.isPalindrome(10));
}

TEST(PalindromeNumber, SingleDigit) {
    Solution solution;
    EXPECT_TRUE(solution.isPalindrome(0));
    EXPECT_TRUE(solution.isPalindrome(5));
    EXPECT_TRUE(solution.isPalindrome(9));
}

TEST(PalindromeNumber, LargePalindrome) {
    Solution solution;
    EXPECT_TRUE(solution.isPalindrome(12321));
    EXPECT_TRUE(solution.isPalindrome(1234321));
}

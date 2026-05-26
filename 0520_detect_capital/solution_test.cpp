#include "solution.cpp"

#include <gtest/gtest.h>

TEST(DetectCapital, Example1) {
    Solution solution;
    string word = "USA";
    EXPECT_TRUE(solution.detectCapitalUse(word));
}

TEST(DetectCapital, Example2) {
    Solution solution;
    string word = "FlaG";
    EXPECT_FALSE(solution.detectCapitalUse(word));
}

TEST(DetectCapital, AllLowercase) {
    Solution solution;
    string word = "leetcode";
    EXPECT_TRUE(solution.detectCapitalUse(word));
}

TEST(DetectCapital, FirstCapitalOnly) {
    Solution solution;
    string word = "Google";
    EXPECT_TRUE(solution.detectCapitalUse(word));
}

TEST(DetectCapital, SingleLetter) {
    Solution solution;
    string word = "A";
    EXPECT_TRUE(solution.detectCapitalUse(word));
}

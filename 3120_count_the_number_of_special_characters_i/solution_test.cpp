#include "solution.cpp"

#include <gtest/gtest.h>

TEST(CountTheNumberOfSpecialCharactersI, Example1) {
    Solution solution;
    string word = "aaAbcBC";
    EXPECT_EQ(solution.numberOfSpecialChars(word), 3);
}

TEST(CountTheNumberOfSpecialCharactersI, Example2) {
    Solution solution;
    string word = "abc";
    EXPECT_EQ(solution.numberOfSpecialChars(word), 0);
}

TEST(CountTheNumberOfSpecialCharactersI, Example3) {
    Solution solution;
    string word = "abBCab";
    EXPECT_EQ(solution.numberOfSpecialChars(word), 1);
}

TEST(CountTheNumberOfSpecialCharactersI, AllUppercase) {
    Solution solution;
    string word = "ABC";
    EXPECT_EQ(solution.numberOfSpecialChars(word), 0);
}

TEST(CountTheNumberOfSpecialCharactersI, SingleLetter) {
    Solution solution;
    string word = "a";
    EXPECT_EQ(solution.numberOfSpecialChars(word), 0);
}

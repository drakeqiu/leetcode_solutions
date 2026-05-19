#include "solution.cpp"

#include <gtest/gtest.h>

TEST(LongestSubstringWithoutRepeatingCharacters, Example1) {
    Solution solution;
    EXPECT_EQ(solution.lengthOfLongestSubstring("abcabcbb"), 3);
}

TEST(LongestSubstringWithoutRepeatingCharacters, Example2) {
    Solution solution;
    EXPECT_EQ(solution.lengthOfLongestSubstring("bbbbb"), 1);
}

TEST(LongestSubstringWithoutRepeatingCharacters, Example3) {
    Solution solution;
    EXPECT_EQ(solution.lengthOfLongestSubstring("pwwkew"), 3);
}

TEST(LongestSubstringWithoutRepeatingCharacters, EmptyString) {
    Solution solution;
    EXPECT_EQ(solution.lengthOfLongestSubstring(""), 0);
}

TEST(LongestSubstringWithoutRepeatingCharacters, SingleChar) {
    Solution solution;
    EXPECT_EQ(solution.lengthOfLongestSubstring("a"), 1);
}

TEST(LongestSubstringWithoutRepeatingCharacters, AllUnique) {
    Solution solution;
    EXPECT_EQ(solution.lengthOfLongestSubstring("abcdef"), 6);
}

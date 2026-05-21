#include "solution.cpp"

#include <gtest/gtest.h>

TEST(LongestCommonPrefix, Example1) {
    Solution solution;
    vector<string> strs = {"flower", "flow", "flight"};
    EXPECT_EQ(solution.longestCommonPrefix(strs), "fl");
}

TEST(LongestCommonPrefix, Example2) {
    Solution solution;
    vector<string> strs = {"dog", "racecar", "car"};
    EXPECT_EQ(solution.longestCommonPrefix(strs), "");
}

TEST(LongestCommonPrefix, SingleString) {
    Solution solution;
    vector<string> strs = {"hello"};
    EXPECT_EQ(solution.longestCommonPrefix(strs), "hello");
}

TEST(LongestCommonPrefix, EmptyString) {
    Solution solution;
    vector<string> strs = {"", "abc"};
    EXPECT_EQ(solution.longestCommonPrefix(strs), "");
}

TEST(LongestCommonPrefix, NoCommonPrefix) {
    Solution solution;
    vector<string> strs = {"abc", "def", "ghi"};
    EXPECT_EQ(solution.longestCommonPrefix(strs), "");
}

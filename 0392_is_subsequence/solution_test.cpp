#include "solution.cpp"

#include <gtest/gtest.h>

TEST(IsSubsequence, Example1) {
    Solution solution;
    string s = "abc";
    string t = "ahbgdc";
    EXPECT_TRUE(solution.isSubsequence(s, t));
}

TEST(IsSubsequence, Example2) {
    Solution solution;
    string s = "axc";
    string t = "ahbgdc";
    EXPECT_FALSE(solution.isSubsequence(s, t));
}

TEST(IsSubsequence, EmptyS) {
    Solution solution;
    string s = "";
    string t = "ahbgdc";
    EXPECT_TRUE(solution.isSubsequence(s, t));
}

TEST(IsSubsequence, EmptyT) {
    Solution solution;
    string s = "a";
    string t = "";
    EXPECT_FALSE(solution.isSubsequence(s, t));
}

TEST(IsSubsequence, BothEmpty) {
    Solution solution;
    string s = "";
    string t = "";
    EXPECT_TRUE(solution.isSubsequence(s, t));
}

TEST(IsSubsequence, SingleCharMatch) {
    Solution solution;
    string s = "a";
    string t = "a";
    EXPECT_TRUE(solution.isSubsequence(s, t));
}

TEST(IsSubsequence, SingleCharNoMatch) {
    Solution solution;
    string s = "b";
    string t = "a";
    EXPECT_FALSE(solution.isSubsequence(s, t));
}

TEST(IsSubsequence, SLongerThanT) {
    Solution solution;
    string s = "abcde";
    string t = "abc";
    EXPECT_FALSE(solution.isSubsequence(s, t));
}

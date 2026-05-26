#include "solution.cpp"

#include <gtest/gtest.h>

// 双指针法测试
TEST(IsSubsequenceTwoPointers, Example1) {
    Solution solution;
    string s = "abc";
    string t = "ahbgdc";
    EXPECT_TRUE(solution.isSubsequenceTwoPointers(s, t));
}

TEST(IsSubsequenceTwoPointers, Example2) {
    Solution solution;
    string s = "axc";
    string t = "ahbgdc";
    EXPECT_FALSE(solution.isSubsequenceTwoPointers(s, t));
}

TEST(IsSubsequenceTwoPointers, EmptyS) {
    Solution solution;
    string s = "";
    string t = "ahbgdc";
    EXPECT_TRUE(solution.isSubsequenceTwoPointers(s, t));
}

TEST(IsSubsequenceTwoPointers, EmptyT) {
    Solution solution;
    string s = "a";
    string t = "";
    EXPECT_FALSE(solution.isSubsequenceTwoPointers(s, t));
}

TEST(IsSubsequenceTwoPointers, BothEmpty) {
    Solution solution;
    string s = "";
    string t = "";
    EXPECT_TRUE(solution.isSubsequenceTwoPointers(s, t));
}

TEST(IsSubsequenceTwoPointers, SingleCharMatch) {
    Solution solution;
    string s = "a";
    string t = "a";
    EXPECT_TRUE(solution.isSubsequenceTwoPointers(s, t));
}

TEST(IsSubsequenceTwoPointers, SingleCharNoMatch) {
    Solution solution;
    string s = "b";
    string t = "a";
    EXPECT_FALSE(solution.isSubsequenceTwoPointers(s, t));
}

TEST(IsSubsequenceTwoPointers, SLongerThanT) {
    Solution solution;
    string s = "abcde";
    string t = "abc";
    EXPECT_FALSE(solution.isSubsequenceTwoPointers(s, t));
}

// 动态规划法测试
TEST(IsSubsequenceDP, Example1) {
    Solution solution;
    string s = "abc";
    string t = "ahbgdc";
    EXPECT_TRUE(solution.isSubsequenceDP(s, t));
}

TEST(IsSubsequenceDP, Example2) {
    Solution solution;
    string s = "axc";
    string t = "ahbgdc";
    EXPECT_FALSE(solution.isSubsequenceDP(s, t));
}

TEST(IsSubsequenceDP, EmptyS) {
    Solution solution;
    string s = "";
    string t = "ahbgdc";
    EXPECT_TRUE(solution.isSubsequenceDP(s, t));
}

TEST(IsSubsequenceDP, EmptyT) {
    Solution solution;
    string s = "a";
    string t = "";
    EXPECT_FALSE(solution.isSubsequenceDP(s, t));
}

TEST(IsSubsequenceDP, BothEmpty) {
    Solution solution;
    string s = "";
    string t = "";
    EXPECT_TRUE(solution.isSubsequenceDP(s, t));
}

TEST(IsSubsequenceDP, SingleCharMatch) {
    Solution solution;
    string s = "a";
    string t = "a";
    EXPECT_TRUE(solution.isSubsequenceDP(s, t));
}

TEST(IsSubsequenceDP, SingleCharNoMatch) {
    Solution solution;
    string s = "b";
    string t = "a";
    EXPECT_FALSE(solution.isSubsequenceDP(s, t));
}

TEST(IsSubsequenceDP, SLongerThanT) {
    Solution solution;
    string s = "abcde";
    string t = "abc";
    EXPECT_FALSE(solution.isSubsequenceDP(s, t));
}

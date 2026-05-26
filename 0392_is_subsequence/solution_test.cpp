#include "solution.cpp"

#include <gtest/gtest.h>

// 主要方法测试（默认使用双指针法）
TEST(IsSubsequence, DefaultMethodExample1) {
    Solution solution;
    string s = "abc";
    string t = "ahbgdc";
    EXPECT_TRUE(solution.isSubsequence(s, t));
}

TEST(IsSubsequence, DefaultMethodExample2) {
    Solution solution;
    string s = "axc";
    string t = "ahbgdc";
    EXPECT_FALSE(solution.isSubsequence(s, t));
}

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

// 边界条件测试
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

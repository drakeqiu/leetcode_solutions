#include "solution.cpp"

#include <gtest/gtest.h>

TEST(RansomNote, Example1) {
    Solution solution;
    EXPECT_EQ(solution.canConstruct("a", "b"), false);
}

TEST(RansomNote, Example2) {
    Solution solution;
    EXPECT_EQ(solution.canConstruct("aa", "ab"), false);
}

TEST(RansomNote, Example3) {
    Solution solution;
    EXPECT_EQ(solution.canConstruct("aa", "aab"), true);
}

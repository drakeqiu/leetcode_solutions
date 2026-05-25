#include "solution.cpp"

#include <gtest/gtest.h>

// LeetCode 示例测试用例 1
TEST(FirstUniqueCharacterInAString, Example1) {
    Solution solution;
    string s = "leetcode";
    EXPECT_EQ(solution.firstUniqChar(s), 0);
}

// LeetCode 示例测试用例 2
TEST(FirstUniqueCharacterInAString, Example2) {
    Solution solution;
    string s = "loveleetcode";
    EXPECT_EQ(solution.firstUniqChar(s), 2);
}

// LeetCode 示例测试用例 3
TEST(FirstUniqueCharacterInAString, Example3) {
    Solution solution;
    string s = "aabb";
    EXPECT_EQ(solution.firstUniqChar(s), -1);
}

// 边界条件测试：单个字符
TEST(FirstUniqueCharacterInAString, SingleCharacter) {
    Solution solution;
    string s = "a";
    EXPECT_EQ(solution.firstUniqChar(s), 0);
}

// 边界条件测试：所有字符相同
TEST(FirstUniqueCharacterInAString, AllSameCharacters) {
    Solution solution;
    string s = "aaaa";
    EXPECT_EQ(solution.firstUniqChar(s), -1);
}

// 边界条件测试：没有唯一字符
TEST(FirstUniqueCharacterInAString, NoUniqueCharacter) {
    Solution solution;
    string s = "aadadaad";
    EXPECT_EQ(solution.firstUniqChar(s), -1);
}

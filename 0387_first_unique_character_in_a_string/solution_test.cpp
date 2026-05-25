#include "solution.cpp"

#include <gtest/gtest.h>

TEST(FirstUniqueCharacterInAString, Example1) {
    Solution solution;
    string s = "leetcode";
    EXPECT_EQ(solution.firstUniqChar(s), 0);
}

TEST(FirstUniqueCharacterInAString, Example2) {
    Solution solution;
    string s = "loveleetcode";
    EXPECT_EQ(solution.firstUniqChar(s), 2);
}

TEST(FirstUniqueCharacterInAString, Example3) {
    Solution solution;
    string s = "aabb";
    EXPECT_EQ(solution.firstUniqChar(s), -1);
}

TEST(FirstUniqueCharacterInAString, SingleCharacter) {
    Solution solution;
    string s = "a";
    EXPECT_EQ(solution.firstUniqChar(s), 0);
}

TEST(FirstUniqueCharacterInAString, AllSameCharacters) {
    Solution solution;
    string s = "aaaa";
    EXPECT_EQ(solution.firstUniqChar(s), -1);
}

TEST(FirstUniqueCharacterInAString, LastCharacterUnique) {
    Solution solution;
    string s = "aadadaad";
    EXPECT_EQ(solution.firstUniqChar(s), 7);
}

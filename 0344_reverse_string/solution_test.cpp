#include "solution.cpp"

#include <gtest/gtest.h>

#include <vector>

using namespace std;

TEST(ReverseString, Example1) {
    Solution solution;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    vector<char> expected = {'o', 'l', 'l', 'e', 'h'};
    solution.reverseString(s);
    EXPECT_EQ(s, expected);
}

TEST(ReverseString, Example2) {
    Solution solution;
    vector<char> s = {'H', 'a', 'n', 'n', 'a', 'h'};
    vector<char> expected = {'h', 'a', 'n', 'n', 'a', 'H'};
    solution.reverseString(s);
    EXPECT_EQ(s, expected);
}

TEST(ReverseString, EdgeCaseSingleChar) {
    Solution solution;
    vector<char> s = {'a'};
    vector<char> expected = {'a'};
    solution.reverseString(s);
    EXPECT_EQ(s, expected);
}

TEST(ReverseString, EdgeCaseEmpty) {
    Solution solution;
    vector<char> s = {};
    vector<char> expected = {};
    solution.reverseString(s);
    EXPECT_EQ(s, expected);
}

TEST(ReverseString, EdgeCaseTwoChars) {
    Solution solution;
    vector<char> s = {'a', 'b'};
    vector<char> expected = {'b', 'a'};
    solution.reverseString(s);
    EXPECT_EQ(s, expected);
}

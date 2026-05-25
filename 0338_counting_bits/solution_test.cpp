#include "solution.cpp"

#include <gtest/gtest.h>

#include <vector>

using namespace std;

TEST(CountingBits, Example1) {
    Solution solution;
    int n = 2;
    vector<int> expected = {0, 1, 1};
    EXPECT_EQ(solution.countBits(n), expected);
}

TEST(CountingBits, Example2) {
    Solution solution;
    int n = 5;
    vector<int> expected = {0, 1, 1, 2, 1, 2};
    EXPECT_EQ(solution.countBits(n), expected);
}

TEST(CountingBits, EdgeCaseZero) {
    Solution solution;
    int n = 0;
    vector<int> expected = {0};
    EXPECT_EQ(solution.countBits(n), expected);
}

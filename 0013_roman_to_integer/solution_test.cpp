#include "solution.cpp"

#include <gtest/gtest.h>

TEST(RomanToInteger, Example1) {
    Solution solution;
    EXPECT_EQ(solution.romanToInt("III"), 3);
}

TEST(RomanToInteger, Example2) {
    Solution solution;
    EXPECT_EQ(solution.romanToInt("LVIII"), 58);
}

TEST(RomanToInteger, Example3) {
    Solution solution;
    EXPECT_EQ(solution.romanToInt("MCMXCIV"), 1994);
}

TEST(RomanToInteger, SubtractiveCases) {
    Solution solution;
    EXPECT_EQ(solution.romanToInt("IV"), 4);
    EXPECT_EQ(solution.romanToInt("IX"), 9);
    EXPECT_EQ(solution.romanToInt("XL"), 40);
    EXPECT_EQ(solution.romanToInt("XC"), 90);
    EXPECT_EQ(solution.romanToInt("CD"), 400);
    EXPECT_EQ(solution.romanToInt("CM"), 900);
}

TEST(RomanToInteger, SingleCharacters) {
    Solution solution;
    EXPECT_EQ(solution.romanToInt("I"), 1);
    EXPECT_EQ(solution.romanToInt("V"), 5);
    EXPECT_EQ(solution.romanToInt("X"), 10);
    EXPECT_EQ(solution.romanToInt("L"), 50);
    EXPECT_EQ(solution.romanToInt("C"), 100);
    EXPECT_EQ(solution.romanToInt("D"), 500);
    EXPECT_EQ(solution.romanToInt("M"), 1000);
}

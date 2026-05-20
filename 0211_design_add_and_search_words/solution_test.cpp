#include "solution.cpp"

#include <gtest/gtest.h>

TEST(DesignAddAndSearchWords, Example1) {
    WordDictionary* wordDictionary = new WordDictionary();
    wordDictionary->addWord("bad");
    wordDictionary->addWord("dad");
    wordDictionary->addWord("mad");
    EXPECT_FALSE(wordDictionary->search("pad")); // return False
    EXPECT_TRUE(wordDictionary->search("bad"));  // return True
    EXPECT_TRUE(wordDictionary->search(".ad"));  // return True
    EXPECT_TRUE(wordDictionary->search("b.."));  // return True
    delete wordDictionary;
}

TEST(DesignAddAndSearchWords, Empty) {
    WordDictionary* wordDictionary = new WordDictionary();
    EXPECT_FALSE(wordDictionary->search("a"));
    delete wordDictionary;
}

TEST(DesignAddAndSearchWords, ExactMatch) {
    WordDictionary* wordDictionary = new WordDictionary();
    wordDictionary->addWord("hello");
    EXPECT_TRUE(wordDictionary->search("hello"));
    EXPECT_FALSE(wordDictionary->search("world"));
    delete wordDictionary;
}

TEST(DesignAddAndSearchWords, WildcardOnly) {
    WordDictionary* wordDictionary = new WordDictionary();
    wordDictionary->addWord("a");
    wordDictionary->addWord("b");
    EXPECT_TRUE(wordDictionary->search("."));
    delete wordDictionary;
}

TEST(DesignAddAndSearchWords, MultipleWildcards) {
    WordDictionary* wordDictionary = new WordDictionary();
    wordDictionary->addWord("abc");
    wordDictionary->addWord("def");
    EXPECT_TRUE(wordDictionary->search("..."));
    EXPECT_FALSE(wordDictionary->search("...."));
    delete wordDictionary;
}
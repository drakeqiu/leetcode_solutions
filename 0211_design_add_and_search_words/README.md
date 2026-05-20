# 211. Design Add and Search Words Data Structure

## 题目描述

Design a data structure that supports adding new words and finding if a string matches any previously added string.

Implement the `WordDictionary` class:

- `WordDictionary()` Initializes the object.
- `void addWord(word)` Adds `word` to the data structure, it can be matched later.
- `bool search(word)` Returns `true` if there is any string in the data structure that matches `word` or `false` otherwise. `word` may contain dots `'.'` where a dot can match any letter.

**Example 1:**
```
Input
["WordDictionary","addWord","addWord","addWord","search","search","search","search"]
[[],["bad"],["dad"],["mad"],["pad"],["bad"],[".ad"],["b.."]]
Output
[null,null,null,null,false,true,true,true]

Explanation
WordDictionary wordDictionary = new WordDictionary();
wordDictionary.addWord("bad");
wordDictionary.addWord("dad");
wordDictionary.addWord("mad");
wordDictionary.search("pad"); // return False
wordDictionary.search("bad"); // return True
wordDictionary.search(".ad"); // return True
wordDictionary.search("b.."); // return True
```

**Constraints:**
- `1 <= word.length <= 25`
- `word` consists of lowercase English letters.
- `word` in `addWord` consists of lowercase English letters and dots.
- There will be at most `2` dots in `word` when searching.
- At most `10^4` calls will be made to `addWord` and `search`.

## 解题思路

> TODO: 实现后补充

## 复杂度分析

> TODO: 实现后补充

## 相关标签

[字典树] [字符串] [深度优先搜索] [设计]

## 参考链接

https://leetcode.com/problems/design-add-and-search-words-data-structure/
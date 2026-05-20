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

使用 Trie（字典树）数据结构来存储和搜索单词，支持通配符匹配。

**数据结构设计：**
1. 定义 `TrieNode` 结构：
   - `children`：包含 26 个子节点指针（对应 26 个小写字母）
   - `isEnd`：标记是否是单词的结尾

2. `WordDictionary` 类：
   - 维护一个 Trie 根节点
   - `addWord`：将单词插入 Trie
   - `search`：使用 DFS 搜索匹配的单词

**算法步骤：**
1. `insert`（添加单词）：
   - 从根节点开始遍历单词的每个字符
   - 如果对应子节点不存在，创建新节点
   - 移动到子节点，继续处理下一个字符
   - 标记最后一个节点为单词结尾

2. `dfs`（搜索）：
   - 如果到达单词末尾，返回当前节点是否是单词结尾
   - 如果当前字符是小写字母：
     - 直接检查对应子节点是否存在
     - 如果存在，递归搜索下一个字符
   - 如果当前字符是通配符 '.'：
     - 遍历所有非空的子节点
     - 对每个子节点递归搜索
     - 如果任一路径返回 true，则返回 true

**关键点：**
- Trie 结构使得单词查找效率高
- 通配符需要遍历所有可能的子节点
- DFS 递归处理通配符匹配

## 复杂度分析

- **时间复杂度**：
  - `addWord`：O(L)，其中 L 是单词长度
  - `search`：最坏情况下 O(26^D)，其中 D 是通配符的数量（每个通配符可能需要遍历 26 个子节点）
  - 平均情况下：O(L)
- **空间复杂度**：O(N * 26)，其中 N 是所有单词的字符总数（每个节点最多有 26 个子节点）

## 相关标签

[字典树] [字符串] [深度优先搜索] [设计]

## 参考链接

https://leetcode.com/problems/design-add-and-search-words-data-structure/
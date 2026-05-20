#include <string>
#include <vector>

using namespace std;

struct TrieNode {
    vector<TrieNode*> children;
    bool isEnd;
    TrieNode() : children(26, nullptr), isEnd(false) {}
};

class WordDictionary {
public:
    WordDictionary() : trie(new TrieNode()) {}

    void addWord(string word) { insert(trie, word); }

    bool search(string word) { return dfs(word, 0, trie); }

private:
    void insert(TrieNode* root, const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (!node->children[index]) {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
        }
        node->isEnd = true;
    }

    bool dfs(const string& word, int index, TrieNode* node) {
        int size = static_cast<int>(word.size());
        if (index == size) {
            return node->isEnd;
        }
        char ch = word[index];
        if (ch >= 'a' && ch <= 'z') {
            TrieNode* child = node->children[ch - 'a'];
            if (!child) {
                return false;
            }
            return dfs(word, index + 1, child);
        } else if (ch == '.') {
            for (TrieNode* child : node->children) {
                if (child && dfs(word, index + 1, child)) {
                    return true;
                }
            }
            return false;
        }
        return false;
    }

    TrieNode* trie;
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */

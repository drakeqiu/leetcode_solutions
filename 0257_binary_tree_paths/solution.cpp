#include "data_structures.h"
#include <string>
#include <vector>

using namespace std;
using namespace leetcode;

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        dfs(root, "", paths);
        return paths;
    }

private:
    void dfs(TreeNode* node, string path, vector<string>& paths) {
        if (!node) {
            return;
        }
        path += to_string(node->val);
        if (!node->left && !node->right) {
            paths.push_back(path);
            return;
        }
        path += "->";
        dfs(node->left, path, paths);
        dfs(node->right, path, paths);
    }
};

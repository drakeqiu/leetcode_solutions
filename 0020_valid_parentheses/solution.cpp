#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> m = {{')', '('}, {'}', '{'}, {']', '['}};
        stack<char> stk;
        for (char ch : s) {
            if (m.count(ch)) {
                if (stk.empty() || stk.top() != m[ch]) {
                    return false;
                }
                stk.pop();
            } else {
                stk.push(ch);
            }
        }
        return stk.empty();
    }
};
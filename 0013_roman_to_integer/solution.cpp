#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int ans = 0;
        int n = static_cast<int>(s.size());
        for (int i = 0; i < n; ++i) {
            int val = m[s[i]];
            if (i + 1 < n && val < m[s[i + 1]]) {
                ans -= val;
            } else {
                ans += val;
            }
        }
        return ans;
    }
};

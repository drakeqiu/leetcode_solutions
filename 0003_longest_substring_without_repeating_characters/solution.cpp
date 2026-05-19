#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int ans = 0, left = 0;
        int n = static_cast<int>(s.size());
        for (int right = 0; right < n; ++right) {
            char ch = s[right];
            if (m.find(ch) != m.end() && m[ch] >= left) {
                left = m[ch] + 1;
            }
            m[ch] = right;
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};

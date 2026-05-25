#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = static_cast<int>(s.size());
        for (int i = 0, j = n - 1; i < j; ++i, --j) {
            swap(s[i], s[j]);  // 交换前后字符
        }
    }
};

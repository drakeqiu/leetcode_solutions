#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int n = static_cast<int>(s.size());
        int p = 0;      // 左指针
        int q = n - 1;  // 右指针
        unordered_set<char> dict = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

        while (p < q) {
            while (p < q && dict.find(s[p]) == dict.end()) {
                p += 1;  // 移动左指针直到找到元音
            }
            while (p < q && dict.find(s[q]) == dict.end()) {
                q -= 1;  // 移动右指针直到找到元音
            }
            if (p < q) {
                swap(s[p], s[q]);  // 交换元音
                p += 1;            // 更新左指针
                q -= 1;            // 更新右指针
            }
        }
        return s;
    }
};

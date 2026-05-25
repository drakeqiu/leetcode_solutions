#include <string>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // 使用数组统计 magazine 中每个字符的出现次数
        int cnt[26] = {0};
        for (char c : magazine) {
            cnt[c - 'a']++;
        }
        // 遍历 ransomNote，检查是否有足够的字符
        for (char c : ransomNote) {
            cnt[c - 'a']--;
            if (cnt[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};

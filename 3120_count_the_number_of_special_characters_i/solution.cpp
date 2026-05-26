#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 统计特殊字母的数量
     *
     * 特殊字母的定义：一个字母同时以小写和大写形式出现在字符串中
     *
     * @param word 输入字符串
     * @return 特殊字母的数量
     *
     * 算法思路：
     * - 使用两个布尔数组分别记录小写和大写字母是否出现
     * - 遍历字符串，标记出现的字母
     * - 遍历26个字母，检查是否同时有小写和大写
     *
     * 时间复杂度：O(n)，n 是单词长度
     * 空间复杂度：O(1)，固定大小的数组
     */
    int numberOfSpecialChars(string word) {
        int cnt = 0;
        vector<bool> lowerCnt(26, false);
        vector<bool> upperCnt(26, false);

        // 标记出现的字母
        for (const char ch : word) {
            if (islower(ch)) {
                lowerCnt[ch - 'a'] = true;
            } else if (isupper(ch)) {
                upperCnt[ch - 'A'] = true;
            }
        }

        // 统计同时有小写和大写的字母
        for (size_t i = 0; i < 26; i++) {
            if (lowerCnt[i] && upperCnt[i]) {
                cnt++;
            }
        }

        return cnt;
    }
};

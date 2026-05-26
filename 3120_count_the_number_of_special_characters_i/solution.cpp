#include <bitset>
#include <string>

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
     * - 使用 bitset<128> 记录所有出现的字符
     * - 遍历字符串，标记出现的字符
     * - 遍历26个字母，检查小写和大写是否都出现过
     *
     * 时间复杂度：O(n)，n 是单词长度
     * 空间复杂度：O(1)，固定大小的 bitset
     */
    int numberOfSpecialChars(string word) {
        int cnt = 0;
        bitset<128> seen;

        // 标记所有出现的字符
        for (const char ch : word) {
            seen[ch] = 1;
        }

        // 检查26个字母是否同时有小写和大写
        for (int i = 0; i < 26; i++) {
            if (seen['a' + i] && seen['A' + i]) {
                cnt++;
            }
        }

        return cnt;
    }
};

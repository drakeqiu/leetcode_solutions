#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 查找字符串中第一个不重复的字符
     *
     * @param s 输入字符串（只包含小写字母）
     * @return 第一个不重复字符的索引，如果不存在则返回-1
     *
     * 算法思路：
     * 1. 使用长度为26的数组统计每个小写字母的出现频率
     * 2. 第二次遍历字符串，找到第一个频率为1的字符
     * 3. 返回该字符的索引，如果没找到则返回-1
     *
     * 时间复杂度：O(n)，其中n是字符串长度
     * 空间复杂度：O(1)，固定大小数组（26个元素）
     */
    int firstUniqChar(string s) {
        int n = static_cast<int>(s.size());
        vector<int> cnt(26);  // 统计每个字符的出现频率

        // 第一次遍历：统计字符频率
        for (auto& ch : s) {
            cnt[ch - 'a'] += 1;
        }

        // 第二次遍历：找到第一个频率为1的字符
        for (int i = 0; i < n; i++) {
            if (cnt[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;  // 没有找到不重复的字符
    }
};

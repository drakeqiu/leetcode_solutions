#include <string>

using namespace std;

class Solution {
public:
    /**
     * 判断单词的大写字母使用是否正确
     *
     * 合法的三种情况：
     * 1. 所有字母都是大写，如 "USA"
     * 2. 所有字母都是小写，如 "leetcode"
     * 3. 只有第一个字母是大写，如 "Google"
     *
     * @param word 待检查的单词
     * @return 如果大写字母使用正确返回true，否则返回false
     *
     * 算法思路：
     * - 通过第二个字母的大小写来推断整个单词的模式
     * - 如果第一个字母小写且第二个字母大写，直接返回false（不可能合法）
     * - 从第三个字母开始，检查每个字母的大小写是否与第二个字母一致
     * - 使用异或运算 ^ 检查两个布尔值是否不同
     *
     * 时间复杂度：O(n)，n 是单词长度
     * 空间复杂度：O(1)
     */
    bool detectCapitalUse(string word) {
        // 如果第一个字母小写且第二个字母大写，不可能合法（如 "fLag"）
        if (word.size() >= 2 && islower(word[0]) && isupper(word[1])) {
            return false;
        }
        // 从第三个字母开始，检查每个字母的大小写是否与第二个字母一致
        // 使用异或运算：如果两个布尔值不同则返回true
        for (size_t i = 2; i < word.size(); i++) {
            if (islower(word[i]) ^ islower(word[1])) {
                return false;
            }
        }
        return true;
    }
};

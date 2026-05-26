#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 判断s是否是t的子序列（默认使用双指针法）
     *
     * @param s 子序列字符串
     * @param t 主字符串
     * @return 如果s是t的子序列返回true，否则返回false
     */
    bool isSubsequence(string s, string t) {
        // TODO: 实现代码（默认调用双指针法）
        return isSubsequenceTwoPointers(s, t);
    }

    /**
     * 双指针法判断子序列
     *
     * @param s 子序列字符串
     * @param t 主字符串
     * @return 如果s是t的子序列返回true，否则返回false
     *
     * 算法思路：
     * 使用两个指针i和j分别指向s和t的起始位置
     * 遍历t字符串，当t[j] == s[i]时，i向后移动
     * 最终判断i是否到达s的末尾
     *
     * 时间复杂度：O(m + n)，其中m和n分别是s和t的长度
     * 空间复杂度：O(1)
     */
    bool isSubsequenceTwoPointers(string s, string t) {
        // TODO: 实现双指针法
        return false;
    }

    /**
     * 动态规划法判断子序列
     *
     * @param s 子序列字符串
     * @param t 主字符串
     * @return 如果s是t的子序列返回true，否则返回false
     *
     * 算法思路：
     * 预处理t字符串，构建dp表
     * dp[i][j] 表示从t的位置i开始，字符j第一次出现的位置
     * 然后使用这个dp表快速判断s是否是t的子序列
     *
     * 时间复杂度：预处理O(n * 26)，查询O(m)，其中m和n分别是s和t的长度
     * 空间复杂度：O(n * 26)
     *
     * 适用于大量查询的场景（进阶问题）
     */
    bool isSubsequenceDP(string s, string t) {
        // TODO: 实现动态规划法
        return false;
    }
};

#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 计算两个数组的交集
     *
     * @param nums1 第一个整数数组
     * @param nums2 第二个整数数组
     * @return 包含两个数组交集的向量，结果中的元素唯一
     *
     * 算法思路：
     * 1. 使用 unordered_set 存储 nums1 的所有元素，自动去重
     * 2. 遍历 nums2，如果元素存在于 nums1 的集合中，则加入结果集合
     * 3. 将结果集合转换为 vector 返回
     */
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // 第一步：将 nums1 的所有元素插入到集合中，自动去重
        unordered_set<int> s1;
        for (auto& num : nums1) {
            s1.insert(num);
        }

        // 第二步：遍历 nums2，查找交集元素
        unordered_set<int> result;
        for (auto& num : nums2) {
            // 如果当前元素在 nums1 的集合中存在，说明是交集元素
            if (s1.find(num) != s1.end()) {
                result.insert(num);  // 插入到结果集合，自动去重
            }
        }

        // 第三步：将结果集合转换为 vector 返回
        return vector<int>(result.begin(), result.end());
    }
};

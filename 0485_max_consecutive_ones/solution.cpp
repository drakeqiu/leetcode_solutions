#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxCount = 0;
        int n = static_cast<int>(nums.size());
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;  // 当前连续1的个数加1
            } else {
                maxCount = max(maxCount, count);  // 遇到0，更新最大值
                count = 0;                        // 重置当前计数
            }
        }
        maxCount = max(maxCount, count);  // 处理数组以1结尾的情况
        return maxCount;
    }
};

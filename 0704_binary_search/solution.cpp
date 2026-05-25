#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 二分查找 - 左闭右闭区间版本
     *
     * @param nums 已排序的数组（升序）
     * @param target 目标值
     * @return 目标值的索引，如果不存在则返回-1
     *
     * 算法思路：
     * 使用二分查找在有序数组中查找目标值
     * 每次迭代将搜索区间减半，时间复杂度为O(log n)
     *
     * 区间定义：[low, high]（左闭右闭）
     * - low: 搜索区间的左边界（包含）
     * - high: 搜索区间的右边界（包含）
     *
     * 时间复杂度：O(log n)
     * 空间复杂度：O(1)
     */
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = static_cast<int>(nums.size()) - 1;  // 右边界（包含）

        while (low <= high) {                  // 区间为[low, high]，当low <= high时继续搜索
            int mid = low + (high - low) / 2;  // 避免溢出的中间点计算
            int num = nums[mid];

            if (num == target) {
                return mid;  // 找到目标，返回索引
            } else if (num < target) {
                low = mid + 1;  // 目标在右半部分，调整左边界
            } else {
                high = mid - 1;  // 目标在左半部分，调整右边界
            }
        }

        return -1;  // 未找到目标
    }
};

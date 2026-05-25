#include <vector>

using namespace std;

class Solution {
public:
    /**
     * 计算斐波那契数列的第n项
     *
     * @param n 非负整数
     * @return 斐波那契数列的第n项
     *
     * 算法思路：
     * 使用迭代方式，避免递归的重复计算
     * 只保存前两项的值，空间复杂度为O(1)
     */
    int fib(int n) {
        if (n < 2) {
            return n;  // F(0) = 0, F(1) = 1
        }

        int prev = 0;  // F(n-2)
        int curr = 1;  // F(n-1)
        int next;      // F(n)

        for (int i = 2; i <= n; i++) {
            next = prev + curr;  // F(n) = F(n-1) + F(n-2)
            prev = curr;         // 更新前一项
            curr = next;         // 更新当前项
        }

        return curr;
    }
};

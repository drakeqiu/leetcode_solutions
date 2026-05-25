#include <cmath>

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) {
            return false;  // 完全数必须大于1
        }
        int sum = 1;  // 1是所有大于1的数的因子
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                sum += i;
                if (i * i != num) {  // 避免重复加平方根
                    sum += num / i;
                }
            }
        }
        return sum == num;
    }
};

#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        // 1. n > 0: 必须是正数
        // 2. (n & (n - 1)) == 0: 只有一个1（是2的幂）
        // 3. (n & 0xaaaaaaaa) == 0: 1在偶数位上（是4的幂）
        return n > 0 && (n & (n - 1)) == 0 && (n & 0xaaaaaaaa) == 0;
    }
};

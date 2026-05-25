#include <iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0;
        int v = x ^ y;  // 异或操作，不同的位为1
        while (v) {
            v = v & (v - 1);  // 消除最低位的1
            cnt += 1;
        }
        return cnt;
    }
};

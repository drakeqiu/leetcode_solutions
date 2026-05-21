#include <cctype>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = static_cast<int>(s.size()) - 1;
        while (left < right) {
            while (!isalnum(s[left]) && left < right) {
                left += 1;
            }
            while (!isalnum(s[right]) && left < right) {
                right -= 1;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left += 1;
            right -= 1;
        }
        return true;
    }
};

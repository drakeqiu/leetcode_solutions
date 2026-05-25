#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1;
        for (auto& num : nums1) {
            s1.insert(num);
        }

        unordered_set<int> result;
        for (auto& num : nums2) {
            if (s1.find(num) != s1.end()) {
                result.insert(num);
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};

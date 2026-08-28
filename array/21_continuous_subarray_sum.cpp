#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    bool continuousSubarraySum(vector<int> &nums, int k) {
        int currentPrefixSum = 0;
        unordered_map<int, int> map;
        map[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            currentPrefixSum += nums[i];

            if (map.count(currentPrefixSum % k)) {
                if (i - map[currentPrefixSum % k] >= 2) 
                    return true;
            } else {
                map[currentPrefixSum % k] = i;
            }
        }
        return false;
    }

    public: Solution() {
        vector<int> nums = {23, 2, 4, 6, 7};
        cout << continuousSubarraySum(nums, 6) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
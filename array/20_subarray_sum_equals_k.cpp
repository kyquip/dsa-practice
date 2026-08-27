#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    void subarraySumEqualsK(vector<int> &nums, int k) {
        unordered_map<int, int> prefixSum;

        prefixSum[0] = 1;

        int currentPrefix = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            currentPrefix += nums[i];

            int required = currentPrefix - k;

            if (prefixSum.find(required) != prefixSum.end()) {
                count += prefixSum[required];
            }

            prefixSum[currentPrefix]++;
        }
        cout << count << endl;

    }

    public: Solution() {
        vector<int> nums = {1, 2, 3, 4};
        subarraySumEqualsK(nums, 2);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
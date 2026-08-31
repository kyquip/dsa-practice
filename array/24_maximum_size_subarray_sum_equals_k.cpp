#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
    void maximumSizeSubarraySumEqualsK(vector<int> &nums, int k) {
        unordered_map<int, int> firstIndex;
        int prefixSum = 0;
        int maxLength = 0;
        firstIndex[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];

            int target = prefixSum - k;

             if (firstIndex.find(target) != firstIndex.end()) {
                int length = i - firstIndex[target];
                maxLength = max(maxLength, length);
            }

            if (firstIndex.find(prefixSum) == firstIndex.end()) {
                firstIndex[prefixSum] = i;
            }
        }
        
        cout << "Answer is " << maxLength << endl;
    }

    public: Solution() {
        vector<int> nums = {1, -1, 5, -2, 3};
        maximumSizeSubarraySumEqualsK(nums, 3);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
    void contiguousArray(vector<int> &nums) {
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == 0) nums[i] = -1;
        
        int prefixSum = 0, maxLength = 0;
        unordered_map<int, int> HashMap;
        HashMap[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];

            if (HashMap.find(prefixSum) != HashMap.end()) {
                maxLength = max(maxLength, i - HashMap[prefixSum]);
            } else {
                HashMap[prefixSum] = i;
            }
        }
        cout << "The maximum lenght is " << maxLength << endl;
    }

    public: Solution() {
        vector<int> nums = {0, 1, 0};
        contiguousArray(nums);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
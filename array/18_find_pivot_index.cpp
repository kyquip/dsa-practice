#include <iostream>
#include <vector>

using namespace std;

class Solution {
    int findPivotIndex(vector<int> &nums) {
        int total = 0, leftSum = 0, rightSum;
        for (int x : nums) total += x;
        for (int i = 0; i < nums.size(); i++) {
            rightSum = total - leftSum - nums[i];

            if (leftSum == rightSum) return i;

            leftSum += nums[i];
        }
        return -1;
    }

    public: Solution() {
        vector<int> nums = {1, 7, 3, 6, 5, 6};
        cout << "ELement is at index " << findPivotIndex(nums) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
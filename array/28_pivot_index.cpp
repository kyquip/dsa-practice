#include <iostream>
#include <vector>

using namespace std;

class Solution{
    void findPivotIndex(vector<int> &nums) {
        int total = 0, currentPrefixSum = 0;
        for(int i: nums) total += i;

        for (int i = 0; i < nums.size(); i++) {
            int right = total - currentPrefixSum - nums[i];
            if(currentPrefixSum == right) {
                cout << "Pivot element is " << nums[i] << " at index " << i << "." << endl;
                return;
            }
            currentPrefixSum += nums[i];
        }
        cout << "No pivot found" << endl;
    }

    public: Solution() {
        vector<int> nums = {1, 7, 3, 6, 5, 6};
        findPivotIndex(nums);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
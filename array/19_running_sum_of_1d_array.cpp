#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void runningSumOf1DArray(vector<int> &nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }
        display(nums);
    }

    void display(vector<int> &nums) {
        cout << "Array is [";
        for (int i = 0; i < nums.size(); i++) {
            if(i == nums.size() - 1) cout << nums[i];
            else cout << nums[i] << ", ";
        }
        cout << "]" << endl;
    }

    public: Solution() {
        vector<int> nums = {1, 2, 3, 4};
        runningSumOf1DArray(nums);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
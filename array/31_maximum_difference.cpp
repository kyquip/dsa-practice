#include <iostream>
#include <vector>

using namespace std;

class Solution{
    void maximumDifferenceBetweenIncreasingElements(vector<int> &nums) {
        int minValue = nums[0], difference = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > minValue)
                difference = max(difference, nums[i] - minValue);
            minValue = min(minValue, nums[i]);
        }

        cout << difference << " is maximum difference between increasing elements." << endl;
    }

    public: Solution() {
        vector<int> nums = {7, 1, 5, 4};
        maximumDifferenceBetweenIncreasingElements(nums);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
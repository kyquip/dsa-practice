#include <iostream>
#include <vector>

using namespace std;

class Solution{
    double maximumAverageSubarray(vector<int> &nums, int k) {
        int windowSum = 0;
        for (int i = 0; i < k; i++) windowSum += nums[i];
        int maxSum = windowSum;

        for (int i = k; i < nums.size(); i++) {
            windowSum += nums[i];
            windowSum -= nums[i - k];
            maxSum = max(maxSum, windowSum);
        }
        double maxAverage = (double)maxSum / k;
        return maxAverage;
    }
    public: Solution() {
        vector<int> nums = {1, 12, -5, -6, 50, 3};
        cout << "Maximum Average of Subarray is " << maximumAverageSubarray(nums, 4) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int maxConsecutiveOnes(vector<int>& nums, int k) {
        int left = 0, zeros = 0, maxLength = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0)   zeros++;

            while (zeros > k) {
                if (nums[left] == 0)    zeros--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }

    public: Solution() {
        vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
        cout << "Longest Subarray is " << maxConsecutiveOnes(nums, 2) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
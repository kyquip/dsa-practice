#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int longestSubarrayOfAfterDeletingOneElement(vector<int> &nums) {
        int left = 0;
        int zeros = 0;
        int maxLength = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0)   zeros++;

            while (zeros > 1) {
                if (nums[left] == 0)    zeros--;
                left++;
            }

            maxLength = max(maxLength, right - left);
        }
        return maxLength;
    }

    public: Solution() {
        vector<int> nums = {1, 1, 0, 1, 1, 1};
        cout << "Longest Subarray is " << longestSubarrayOfAfterDeletingOneElement(nums) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
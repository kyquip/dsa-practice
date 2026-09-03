#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int minimumSizeSubarraySum(vector<int> nums, int target) {
        int left = 0, sum = 0, minLength = nums.size() + 1;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            while (sum >= target) {
                minLength = min(minLength, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return minLength == nums.size() + 1 ? 0 : minLength;
    }

    public: Solution() {
        vector<int> nums = {2, 3, 1, 2, 4, 3};
        cout << "Minimum Lenght is " << minimumSizeSubarraySum(nums, 7) << endl;
        
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
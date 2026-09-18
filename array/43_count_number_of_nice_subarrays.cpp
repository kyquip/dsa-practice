#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int countNumberOfNiceSubarrays(vector<int> &nums, int &k) {
        int n = nums.size(), left = 0, oddCount = 0, ans = 0, evenCount = 0;

        for (int right = 0; right < n; right++) {
            if (nums[right] % 2 != 0) {
                oddCount++;
            }
            if (oddCount > k) {
                while (oddCount > k) {
                    if (nums[left] % 2 != 0)
                        oddCount--;
                    left++;
                }
                evenCount = 0;
            }

            if (oddCount == k) {
                while (left <= right && nums[left] % 2 == 0) {
                    evenCount++;
                    left++;
                }
                ans += evenCount + 1;
            }
        }
        return ans;
    }

    public: Solution() {
        vector<int> nums = {1, 1, 2, 1, 1};
        int k = 3;
        cout << "Number of Nice Subarray are: " << countNumberOfNiceSubarrays(nums, k) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
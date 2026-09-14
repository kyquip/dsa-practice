#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int findMaximum(vector<int> &nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return nums[left];
    }

    public: Solution() {
        vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
        cout << "Maximum is " << findMaximum(nums) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
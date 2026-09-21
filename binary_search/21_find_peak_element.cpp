#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int findPeakElement(vector<int> &nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if(nums[mid] < nums[mid + 1]) left = mid + 1;
            else right = mid;
        }

        return left;
    }

    public: Solution() {
        vector<int> nums = {1, 2, 3, 1};
        cout << "The Peak Element is at index: " << findPeakElement(nums) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
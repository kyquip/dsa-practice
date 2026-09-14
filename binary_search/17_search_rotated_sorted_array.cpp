#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int searchInRotatedSortedArray(vector<int> &nums, int &target) {
        int left = 0, right = nums.size() - 1;

        while(left <= right) {
            int mid  = left + (right - left) / 2;
            if(nums[mid] == target) {
                return mid;
            } else if(nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                } else{ left = mid + 1; }
            } else {
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                } else { right = mid - 1; }
            }
        }

        return -1;
    }

    public: Solution() {
        vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
        int target = 0;
        cout << "Zero is present at index: " << searchInRotatedSortedArray(nums, target) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
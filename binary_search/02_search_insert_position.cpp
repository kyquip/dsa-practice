#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void searchInsertPosition(vector<int> &nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid = (left + right) / 2;

        while(left < right) {
            if(nums[mid] == target) {
                cout << mid << " is the Index to be inserted" << endl;
                break;
            }
            if(nums[mid] < target) {
                left = mid;
                mid = (left + right) / 2;
            } else {
                right = mid;
                mid = (left + right) / 2;
            }
        }
    }

    public: Solution() {
        vector<int> nums = {1,3,5,6};
        searchInsertPosition(nums, 5);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
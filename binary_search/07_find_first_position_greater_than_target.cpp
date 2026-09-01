#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int findFirstPositionGreaterThanTarget(vector<int> &nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid = left + (right - left) / 2;
        while(left <= right) {
            if(nums[mid] == target) {
                while (nums[mid] == target) mid++;
                return mid;
            } else if(nums[mid] > target) {
                right = mid - 1;
            } else { left = mid + 1; }

            mid = left + (right - left) / 2;
        }
        return -1;
    }

    public: Solution() {
        vector<int> nums = {1, 2, 4, 4, 4, 6, 8};
        cout << "First Position is " << findFirstPositionGreaterThanTarget(nums, 4) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
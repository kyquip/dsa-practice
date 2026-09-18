#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int searchInsertPosition(vector<int> &nums, int &target) {
        int left = 0, right = nums.size() - 1, mid;

        while (left <= right) {
            mid = left + (right - left) / 2;
            if(nums[mid] == target) break;
            else if (nums[mid] >= target) right = mid - 1;
            else left = mid + 1;
        }

        return mid;
    }

    public: Solution() {
        vector<int> nums = {1, 3, 5, 6};
        int target = 5;
        cout << "Number 5 will be inserted at index: " << searchInsertPosition(nums, target) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
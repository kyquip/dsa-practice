#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int firstOccurrenceOfTarget(vector<int> &nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid = left + (right - left) / 2;
        while(left <= right) {
            if(nums[mid] == target) {
                while (nums[mid] == target) mid--;
                return mid + 1;
            } else if(nums[mid] > target) {
                right = mid - 1;
            } else { left = mid + 1; }

            mid = left + (right - left) / 2;
        }
        return -1;
    }

    public: Solution() {
        vector<int> nums = {1, 2, 2, 2, 3};
        cout << "First Position is " << firstOccurrenceOfTarget(nums, 2) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
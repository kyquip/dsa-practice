#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int binarySearch(vector<int> &nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }

        return -1;
    }

    public: Solution() {
        vector<int> nums = {1, 3, 5, 7, 9};
        int target = 7;
        cout << "Target 7 is present at index: " << binarySearch(nums, target) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
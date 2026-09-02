#include <iostream>
#include <vector>

using namespace std;

class Solution{
    string findClosestElementToX(vector<int> &nums, int x) {
        int left = 0, right = nums.size() - 1;
        int mid = left + (right - left) / 2;

        while(left <= right) {
            if(nums[mid] == x) {
                return to_string(nums[mid]);
            } else if(nums[mid] > x) {
                right = mid - 1;
            } else { left = mid + 1; }

            mid = left + (right - left) / 2;
        }
        return to_string(nums[right]) + " or " + to_string(nums[left]);
    }

    public: Solution() {
        vector<int> nums = {1, 3, 5, 7, 9};
        cout << "Closest is " << findClosestElementToX(nums, 6) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
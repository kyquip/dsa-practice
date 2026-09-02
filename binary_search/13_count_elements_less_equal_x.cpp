#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int findNumberOfElements(vector<int> &nums, int x) {
        int left = 0, right = nums.size() - 1;
        int mid = left + (right - left) / 2, count = 0;

        while(left <= right) {
            if(nums[mid] == x) {
                while (mid >= 0) {
                    count++;
                    mid--;
                }
                break;
            } else if(nums[mid] > x) {
                right = mid - 1;
            } else { left = mid + 1; }

            mid = left + (right - left) / 2;
        }
        return count;
    }

     public: Solution() {
        vector<int> nums = {1, 2, 4, 5, 7, 9};
        cout << "Count is " << findNumberOfElements(nums, 5) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
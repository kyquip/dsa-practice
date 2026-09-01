#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int countOccurrencesInSortedArray(vector<int> &nums, int target) {
        int left = 0, right = nums.size() - 1, count = 0;
        int mid = left + (right - left) / 2;

        while(left <= right) {
            if(nums[mid] == target) {
                count++;
                left = mid + 1;
                while(nums[left] == target) {
                    count++;
                    left++;
                }
                while(nums[mid - 1] == target) {
                    count++;
                    mid--;
                }
                break;
            } else if(nums[mid] > target) {
                right = mid;
            } else { left = mid; }

            mid = left + (right - left) / 2;
        }
        return count;
    }

    public: Solution() {
        vector<int> nums = {1, 2, 2, 2, 3, 4};
        cout << "Count Occurrences in Sorted Array is " << countOccurrencesInSortedArray(nums, 2) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
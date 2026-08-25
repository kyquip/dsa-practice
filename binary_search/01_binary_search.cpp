#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void binarySearch(vector<int> &arr, int target) {
        int left = 0, right = arr.size() - 1;
        int mid = (left + right) / 2;
        while (left < right) {
            if (arr[mid] == target) {
                cout << target << " is present at index " << mid << endl;
                break;
            }
            if(arr[mid] < target) {
                left = mid;
                mid = (left + right) / 2;
            } else {
                right = mid;
                mid = (left + right) / 2;
            }
        }
    }

    public: Solution() {
        vector<int> nums = {-1,0,3,5,9,12};
        binarySearch(nums, 9);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
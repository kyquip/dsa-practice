#include <iostream>
#include <vector>

using namespace std;

class Solution{
    void display(vector<int> &nums) {
        cout << "Array is: ";
        for(int i: nums) cout << i << " ";
        cout << endl;
    }

    void sortColorsDutchNationalFlag(vector<int> &nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }

    public: Solution() {
        vector<int> nums = {2, 0, 2, 1, 1, 0};
        sortColorsDutchNationalFlag(nums);
        display(nums);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
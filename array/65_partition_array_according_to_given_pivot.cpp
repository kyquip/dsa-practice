#include <iostream>
#include <vector>

using namespace std;

class Solution{
    void display(vector<int> &nums) {
        cout << "Array is: ";
        for(int i: nums) cout << i << " ";
        cout << endl;
    }

    void givenAnArrayAndAPivot(vector<int> &nums, int &pivot) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] < pivot) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == pivot) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
        display(nums);
    }
    
    public: Solution() {
        vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
        int pivot = 10;
        givenAnArrayAndAPivot(nums, pivot);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
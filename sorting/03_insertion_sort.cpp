#include <iostream>

using namespace std;

class Solution {
    void insertionSort(vector<int> &nums) {
        for (int i = 0; i < nums.size(); i++) {
            int key = nums[i];
            int j = i - 1;
            while (j >= 0 && nums[j] >key) {
                nums[j + 1] = nums[j];
                j = j - 1;
            }
            nums[j + 1] = key;
        }
    }

    void display(vector<int> &nums) {
        cout << "Array is [";
        for (int i = 0; i < nums.size(); i++) {
            if (i == nums.size() - 1) cout << nums[i];
            else cout << nums[i] << ", ";
        }
        cout << "]" << endl;
    }

    public: Solution() {
        vector<int> nums = {5, 2, 4, 6, 1, 3};
        display(nums);
        insertionSort(nums);
        cout << "After Sorting" << endl;
        display(nums);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
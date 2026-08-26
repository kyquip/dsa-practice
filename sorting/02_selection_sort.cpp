#include <iostream>

using namespace std;

class Solution {
    void selectionSort(vector<int> &nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < nums.size(); j++)
                if(nums[j] < nums[minIndex]) minIndex = j;
                if (minIndex != i) {
                    nums[i] = nums[i] ^ nums[minIndex];
                    nums[minIndex] = nums[i] ^ nums[minIndex];
                    nums[i] = nums[i] ^ nums[minIndex];
                }
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
        vector<int> nums = {64, 25, 12, 22, 11};
        display(nums);
        selectionSort(nums);
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
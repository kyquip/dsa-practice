#include <iostream>

using namespace std;

class Solution {
    void bubbleSort(vector<int> &nums) {
        bool swapped = false;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = 0; j < nums.size() - i - 1; j++) {
                if(nums[j] > nums[j + 1]) {
                    nums[j] = nums[j] ^ nums[j + 1];
                    nums[j + 1] = nums[j] ^ nums[j + 1];
                    nums[j] = nums[j] ^ nums[j + 1];
                    swapped = true;
                }
            }
            if (!swapped) break;
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
        vector<int> nums = {5, 1, 4, 2, 8};
        display(nums);
        bubbleSort(nums);
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
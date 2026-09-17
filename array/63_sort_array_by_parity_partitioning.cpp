#include <iostream>
#include <vector>

using namespace std;

class Solution{
    void sortArrayByParity(vector<int> &nums) {
        int left = 0, right = nums.size() - 1;

        while(left <= right) {
            if (nums[left] % 2 == 0) left++;
            else if (nums[right] % 2 != 0) right--;
            else {
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
        }
        display(nums);
    }
    
    void display(vector<int> &nums) {
        cout << "Array is: ";
        for(int i: nums) cout << i << " ";
        cout << endl;
    }

    public: Solution() {
        vector<int> nums = {3, 1, 2, 4};
        sortArrayByParity(nums);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
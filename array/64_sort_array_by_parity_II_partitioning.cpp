#include <iostream>
#include <vector>

using namespace std;

class Solution{
    void sortArrayByParityII(vector<int> &nums) {
        int n = nums.size(), even = 0, odd = 1;

        while (even < n && odd < n) {
            while (even < n && nums[even] % 2 == 0) even += 2;
            while (odd < n && nums[odd] % 2 != 0) odd += 2;
            if (even < n && odd < n) {
                swap(nums[even], nums[odd]);
                even += 2;
                odd += 2;
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
        vector<int> nums = {4, 2, 5, 7};
        sortArrayByParityII(nums);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
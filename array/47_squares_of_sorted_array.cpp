#include <iostream>
#include <vector>

using namespace std;

class Solution{
    vector<int> squaresOfASortedArray(vector<int> &nums) {
        vector<int> result(nums.size());
        int left = 0, right = nums.size() - 1;

        for (int pos = nums.size() - 1; pos >= 0; pos--) {
            if (abs(nums[left]) > abs(nums[right])) {
                result[pos] = nums[left] * nums[left];
                left++;
            } else {
                result[pos] = nums[right] * nums[right];
                right--;
            }
        }

        return result;
    }

    public: Solution() {
        vector<int> nums = {-4, -1, 0, 3, 10};
        vector<int> result = squaresOfASortedArray(nums);
        for (int x : result) {
            cout << x << " ";
        } cout << endl << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
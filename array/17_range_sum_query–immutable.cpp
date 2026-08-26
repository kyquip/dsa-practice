#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void rangeSumQuery(vector<int> &nums, vector<int>& range) {
        vector<int> prefixArray(nums.size(), 0);
        prefixArray[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
            prefixArray[i] = nums[i] + prefixArray[i - 1];
        int sum = range[0] > 0 ? prefixArray[range[1]] - prefixArray[range[0] - 1] : prefixArray[range[1]];
        cout << "Sum from given range is " << sum << endl;
    }

    public: Solution() {
        vector<int> nums = {1, 3, 6, 10, 15}, range1 = {1, 3}, range2 = {0, 4};
        rangeSumQuery(nums, range1);
        rangeSumQuery(nums, range2);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
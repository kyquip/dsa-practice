#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int maxSubarraySum(vector<int> &arr) {
        int res = arr[0];           
        int maxEnding = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            maxEnding = max(arr[i], maxEnding + arr[i]);
            res = max(res, maxEnding);
        }

        return res;
    }

    public: Solution() {
        vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        cout << "Maximum Subarray Sum is " << maxSubarraySum(nums) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void productOfArrayExceptSelf(vector<int> &nums) {
        int n = nums.size();
        int prefix = 1, suffix = 1;
        vector<int> ans(n, 1);

        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        for (int i = n - 1; i > -1; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }
        
        display(ans);
    }

    void display(vector<int> &nums) {
        cout << "Answer is [";
        for (int i = 0; i < nums.size(); i++) {
            if(i == nums.size() - 1) cout << nums[i];
            else cout << nums[i] << ", ";
        }
        cout << "]" << endl;
    }

    public: Solution() {
        vector<int> nums = {1, 2, 3, 4};
        productOfArrayExceptSelf(nums);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
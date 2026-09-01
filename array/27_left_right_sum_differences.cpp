#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void display(vector<int> &nums) {
        cout << "Answer is [";
        for (int i = 0; i < nums.size(); i++) {
            if(i == nums.size() - 1) cout << nums[i];
            else cout << nums[i] << ", ";
        }
        cout << "]" << endl;
    }

    void leftAndRightSumDifferences(vector<int> &nums) {
        int total = 0, leftSum = 0;
        for (int num : nums) total += num;

        vector<int> answer(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int rightSum = total - leftSum - nums[i];
            answer[i] = abs(leftSum - rightSum);
            leftSum += nums[i];
        }

        display(answer);
    }

    public: Solution() {
        vector<int> nums = {10, 4, 8, 3};
        leftAndRightSumDifferences(nums);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
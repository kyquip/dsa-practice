#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                    if (sum == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});

                        while (left < right && nums[left] == nums[left + 1]) left++;

                        while (left < right && nums[right] == nums[right - 1]) right--;

                        left++;
                        right--;
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }

        return result;
    }

    public: Solution() {
        vector<int> nums = {1, 0, -1, 0, -2, 2};
        int target = 0;
        vector<vector<int>> result = fourSum(nums, target);

        for (auto& triplet : result) {
            cout << "[";
            for (int i = 0; i < triplet.size(); i++) {
                cout << triplet[i];
                if (i < triplet.size() - 1) cout << ", ";
            }
            cout << "]\n";
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
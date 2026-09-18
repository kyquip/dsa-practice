#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int subarraysWithKDifferentIntegers(vector<int> &nums, int &k) {
        if (k < 0)  return 0;

        unordered_map<int, int> freq;
        int left = 0, ans = 0;

        for (int right = 0; right < nums.size(); right++) {
            freq[nums[right]]++;
            while (freq.size() > k) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0)
                    freq.erase(nums[left]);
                left++;
            }
            ans += right - left + 1;
        }
        return ans;
    }

    public: Solution() {
        vector<int> nums = {1, 2, 1, 2, 3};
        int k = 2;
        cout << "Subarrays with K different integers is " << subarraysWithKDifferentIntegers(nums, k) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
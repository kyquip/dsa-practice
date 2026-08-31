#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
    void binarySubarraysWithSum(vector<int> &nums, int goal) {
        unordered_map<int, int> map;
        map[0] = 1;

        int currentPrefix = 0;
        int answer = 0;

        for (int i = 0; i < nums.size(); i++) {
            currentPrefix += nums[i];
            int needed = currentPrefix - goal;

            if (map.find(needed) != map.end())
                answer += map[needed];

            map[currentPrefix]++;
        }

        cout << "Answer is " << answer << endl;
    }
    
    public: Solution() {
        vector<int> nums = {1, 0, 1, 0, 1};
        binarySubarraysWithSum(nums, 2);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
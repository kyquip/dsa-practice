#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
    void majorityElement(vector<int> &nums) {
        map<int, int> map;
        int best = 0, maxCount = 0;

        for (int num : nums) {
            map[num]++;
        }

        for (auto& entry : map) {
            if (entry.second > maxCount) {
                maxCount = entry.second;
                best = entry.first;
            }
        }

        if (maxCount > nums.size() / 2) {
            cout << best << " is Majority Element." << endl;
        } else {
            cout << "No Majority Element." << endl;
        }
    }

    public: Solution() {
        vector<int> arr_1 = {3, 2, 3};
        vector<int> arr_2 = {2, 2, 1, 1, 1, 2, 2};
        majorityElement(arr_1);
        majorityElement(arr_2);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
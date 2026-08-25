#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
    void majorityElement(vector<int> &nums) {
        map<int, int> map;
        for (int n : nums) map[n]++;

        cout << "[ ";
        for (auto &entry : map)
            if (entry.second > nums.size() / 3)
                cout << entry.first << " ";
        cout << "]" << endl;
    }


    public: Solution() {
        vector<int> arr_1 =  {3, 2, 3};
        vector<int> arr_2 = {1, 1, 1, 3, 3, 2, 2, 2};
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
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
    void findTheDifferenceOfTwoArrays(vector<int> &nums1, vector<int> &nums2) {
        unordered_set<int> result1(nums1.begin(), nums1.end()), result2(nums2.begin(), nums2.end());
        for (int i = 0; i < nums1.size(); i++) {
            result1.erase(nums2[i]);
            result2.erase(nums1[i]);
        }
        cout << "Output is [[";
        for (int x : result1) cout << x << ", ";
        cout << "], [";
        for (int x : result2) cout << x << ", ";
        cout << "]]" << endl;
    }

    public: Solution() {
        vector<int> nums1 = {1, 2, 3}, nums2 = {2, 4, 6};
        vector<int> nums3 = {1, 2, 3, 3}, nums4 = {1, 1, 2, 2};
        findTheDifferenceOfTwoArrays(nums1, nums2);
        findTheDifferenceOfTwoArrays(nums3, nums4);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
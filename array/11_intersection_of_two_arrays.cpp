#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    void intersectionOfTwoArrays(vector<int> &nums1, vector<int> &nums2) {
        if (nums1.size() > nums2.size())    swap(nums1, nums2);

        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> ans;

        for (int x : nums2) {
            if (s.count(x)) {
                ans.push_back(x);
                s.erase(x);
            }
        }

        cout << "Intersection is: ";
        for(int i: ans) {
            cout << i << " ";
        } cout << endl;
    }

    public: Solution () {
        vector<int> nums1 = {1, 2, 2, 1}, nums2 = {2, 2};
        vector<int> nums3 = {4, 9, 5}, nums4 = {9, 4, 9, 8, 4};
        intersectionOfTwoArrays(nums1, nums2);
        intersectionOfTwoArrays(nums3, nums4);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
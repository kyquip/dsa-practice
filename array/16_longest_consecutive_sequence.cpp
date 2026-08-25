#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    void longestConsecutiveSequence(vector<int> &nums) {
        if (nums.empty()) return;
        unordered_set<int> elements(nums.begin(), nums.end());
        int maxLength = 0;

        for (int num : elements) {
            if (elements.find(num - 1) == elements.end()) {
                int current = num;
                int currentLength = 1;
                while (elements.find(current + 1) != elements.end()) {
                    current++;
                    currentLength++;
                }
                maxLength = max(maxLength, currentLength);
            }
        }
        cout << maxLength << endl;
    }

    public: Solution() {
        vector<int> nums1 = {100, 4, 200, 1, 3, 2};
        vector<int> nums2 = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
        longestConsecutiveSequence(nums1);
        longestConsecutiveSequence(nums2);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
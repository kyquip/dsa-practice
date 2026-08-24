#include <iostream>

using namespace std;

class Solution {
    int findDuplicate(int *nums) {
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = nums[0];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }

    public: Solution() {
        int nums_1[] = {1, 3, 4, 2, 2};
        int nums_2[] = {3, 1, 3, 4, 2};
        cout << "Duplicate is " << findDuplicate(nums_1) << endl;
        cout << "Duplicate is " << findDuplicate(nums_2) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int removeElement(vector<int>& nums, int val) {
        int write = 0;
        for (int read = 0; read < nums.size(); read++) {
            if (nums[read] != val) {
                nums[write] = nums[read];
                write++;
            }
        }
        return write;
    }

    public: Solution() {
        vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
        int k = removeElement(nums, 2);

        cout << "k = " << k << endl;
        cout << "Remaining elements: ";
        for (int i = 0; i < k; i++) cout << nums[i] << " ";
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
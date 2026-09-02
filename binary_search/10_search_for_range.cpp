#include <iostream>
#include <vector>

using namespace std;

class Solution{
    vector<int> searchForRange(vector<int> &nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid = left + (right - left) / 2;
        vector<int> result;

        while(left <= right) {
            if(nums[mid] == target) {
                left = mid;
                right = mid;

                while (nums[left] == target) left--;
                while (nums[right] == target) right++;

                result.push_back(left + 1);
                result.push_back(right - 1);
                break;
            } else if(nums[mid] > target) {
                right = mid - 1;
            } else { left = mid + 1; }

            mid = left + (right - left) / 2;
        }
        return result;
    }

    public: Solution() {
        vector<int> nums = {1, 2, 2, 2, 3};
        vector<int> result = searchForRange(nums, 2);
        cout << "First Position is " << result[0] << endl;
        cout << "Last Position is " << result[1] << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
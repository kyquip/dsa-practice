#include <iostream>
#include <vector>

using namespace std;

class Solution{
      vector<int> findFirstAndLastPosition(vector<int> &nums, int &target) {
          vector<int> result;
          int left = 0, right = nums.size() - 1;
          while (left <= right) {
              int mid = left + (right - left) / 2;

              if(nums[mid] == target) {
                  left = mid;
                  while (nums[mid - 1] == target) mid--;
                  while (nums[left + 1] == target) left++;

                  result.push_back(mid);
                  result.push_back(left);
                  break;
              }else if(nums[mid] > target) {
                  right = mid - 1;
              } else { left = left + 1; }
          }

          return result;
      }

      public: Solution() {
            vector<int> nums = {5, 7, 7, 8, 8, 10};
            int target = 8;
            vector<int> result = findFirstAndLastPosition(nums, target);
            cout << "First occurence is " << result[0] << " and last is " << result[1] << endl;
      }
};

int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);
      Solution s;
      return 0;
}
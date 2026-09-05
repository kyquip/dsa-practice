#include <iostream>
#include <vector>

using namespace std;

class Solution{
    pair<int, int> twoSumII(vector<int> &numbers, int target) {
        int left = 0, right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target)  return {left + 1, right + 1};
            else if (sum < target)  left++;
            else right--;
        }

        return {-1, -1};
    }

    public: Solution() {
        vector<int> numbers = {2, 7, 11, 15};
        pair<int, int> result = twoSumII(numbers, 9);
        cout << result.first << " " << result.second << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
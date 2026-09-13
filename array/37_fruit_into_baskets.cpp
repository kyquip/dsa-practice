#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution{
    int fruitIntoBaskets(vector<int> &fruits) {
        int left = 0, right = 0, maxLength = 0;
        unordered_map<int, int> fruitCount;

        while(right < fruits.size()) {
            fruitCount[fruits[right]]++;

            while (fruitCount.size() > 2) {
                fruitCount[fruits[left]]--;

                if (fruitCount[fruits[left]] == 0) {
                    fruitCount.erase(fruits[left]);
                }

                left++;
            }

            maxLength = max(maxLength, right - left + 1);

            right++;
        }
        
        return maxLength;
    }

    public: Solution() {
        vector<int> fruits = {1, 2, 1, 2, 3, 2, 2 };
        cout << "The length of the longest contiguous subarray is" << fruitIntoBaskets(fruits) << ".";
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
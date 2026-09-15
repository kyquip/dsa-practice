#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int containerWithMostWater(vector<int> &height) {
        int left = 0, right = height.size() - 1, mostWater = 0;

        while(left < right) {
            mostWater = max(mostWater, ((right-left) * min(height[left], height[right])));
            if (height[left] > height[right]) right--;
            else left++;
        }
        
        return mostWater;
    }

    public: Solution() {
        vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
        cout << "Container with Most water is: " << containerWithMostWater(height) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int trappingRainWater(vector<int> &height) {
        int left = 0, right = height.size() - 1, leftMax = 0, rightMax = 0, water = 0;

        while(left < right) {
            if(height[left] < height[right]) {
                leftMax = max(leftMax, height[left]);
                water += leftMax - height[left];
                left++;
            } else {
                rightMax = max(rightMax, height[right]);
                water += rightMax - height[right];
                right--;
            }
        }
        
        return water;
    }

    public: Solution() {
        vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
        cout << "Rain Water Trapped is " << trappingRainWater(height) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
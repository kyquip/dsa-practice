#include <iostream>
#include <vector>

using namespace std;

class Solution{
    void sortColors(vector<int> &colors) {
        int left = 0;

        for (int right = 0; right < colors.size(); right++) {
            if (colors[right] == 0) {
                swap(colors[left], colors[right]);
                left++;
            }
        }

        for (int right = left; right < colors.size(); right++) {
            if (colors[right] == 1) {
                swap(colors[left], colors[right]);
                left++;
            }
        }

        displayColors(colors);
    }

    void displayColors(vector<int> &nums) {
        cout << "Colors are [";
        for (int i = 0; i < nums.size(); i++) {
            if(i == nums.size() - 1) cout << nums[i];
            else cout << nums[i] << ", ";
        }
        cout << "]" << endl;
    }

    public: Solution() {
        vector<int> colors = {2, 0, 2, 1, 1, 0};
        sortColors(colors);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
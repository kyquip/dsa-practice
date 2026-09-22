#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution{
    int capacityToShipPackagesWithinDDays(vector<int> &weights, int &days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        while (left < right) {
            int mid = left + (right - left) / 2;
            int daysRequired = 1, currentLoad = 0;

            for (int weight : weights) {
                if (currentLoad + weight > mid) {
                    daysRequired++;
                    currentLoad = 0;
                } currentLoad += weight;
            }

            if (daysRequired <= days) right = mid;
            else left = mid + 1;
        }

        return left;
    }

    public: Solution() {
        vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int days = 5;
        cout << "Capacity to Ship Packages Within 5 Days: " << capacityToShipPackagesWithinDDays(weights, days) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
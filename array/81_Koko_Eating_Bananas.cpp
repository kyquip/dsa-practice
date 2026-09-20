#include<iostream>
#include<vector>

using namespace std;

class Solution{
    int kokoEatingBananas(vector<int> &piles, int &h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());

        while (left < right) {
            int mid = left + (right - left) / 2;
            long long hours = 0;

            for (int pile : piles) hours += (pile + mid - 1) / mid;

            if (hours <= h)  right = mid;
            else left = mid + 1;
        }

        return left;
    }

    public: Solution() {
        vector<int> piles = {3, 6, 7, 11};
        int h = 8;
        cout << "Minimum Eating Speed is " << kokoEatingBananas(piles, h) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
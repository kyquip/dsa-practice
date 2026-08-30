#include <iostream>

using namespace std;

class Solution {
    int guess(int num, int pick) {
        if (num == pick) return 0;
        else if (num < pick) return -1;
        else return 1;
    }

    int guessNumber(int n, int pick) {
        int left = 1, right = n;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            int result = guess(mid, pick);

            if (result == 0)
                return mid;
            else if (result < 0)
                left = mid + 1;
            else
            right = mid - 1;
        }

        return -1;
    }

    public: Solution() {
        int n = 10;
        int pick = 6;
        cout << guessNumber(n, pick) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
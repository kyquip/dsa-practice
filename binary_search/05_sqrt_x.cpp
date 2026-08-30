#include <iostream>

using namespace std;

class Solution {
    int mySqrt(int x) {
        long long left = 1;
        long long right = x;
        int answer = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;

            if (mid * mid <= x) {
                answer = mid;
                left = mid + 1;
            } 
            else {
                right = mid - 1;
            }
        }

        return answer;
    }

    public: Solution() {
        int x;
        cout << "Enter number: ";
        cin >> x;
        cout << "Sqrt is " << mySqrt(x) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
#include <iostream>

using namespace std;

class Solution {
    bool isBadVersion(int version) {
        return version >= 4;
    }
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
    public: Solution() {
        int n;
        cout << "Enter number of versions: ";
        cin >> n;
        cout << "First bad version: " << firstBadVersion(n) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}

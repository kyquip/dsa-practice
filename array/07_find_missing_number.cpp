#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void findMissingNumber(vector<int> arr) {
        int missingNumber = (arr.size() + 1) * arr.size() / 2;
        for(int n: arr) {
            missingNumber-= n;
        }
        cout << "Missing number is " << missingNumber << endl;
    }

    public: Solution() {
        vector<int> arr_1 = {3, 0, 1};
        vector<int> arr_2 = {0, 1};
        vector<int> arr_3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
        findMissingNumber(arr_1);
        findMissingNumber(arr_2);
        findMissingNumber(arr_3);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
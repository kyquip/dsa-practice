#include <iostream>

using namespace std;

class Solution {
    void findMaximumAndMinimumInAnArray(int *arr, int size) {
        int maximum = arr[0];
        int minimum = arr[0];

        for (int i = 1; i < size; i++) {
            maximum = max(maximum, arr[i]);
            minimum = min(minimum, arr[i]);
        }

        cout << maximum << " is maximum." << endl;
        cout << minimum << " is minimum." << endl;
    }

    public:
    Solution() {
        int arr_1[] = {7, 2, 9, 4, 1, 6};
        int arr_2[] = {-5, -2, -10, -1};
        findMaximumAndMinimumInAnArray(arr_1, 6);
        findMaximumAndMinimumInAnArray(arr_2, 4);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
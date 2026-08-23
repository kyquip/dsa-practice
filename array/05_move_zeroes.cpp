#include <iostream>

using namespace std;

class Solution {
    void moveZeroes(vector<int> arr) {
        int putZeroIndex = arr[0] == 0 ? 1 : 0;
        for (int i = 1; i < arr.size(); i++) {
            if(arr[i] == 0) {
                arr[i] = arr[i] ^ arr[putZeroIndex];
                arr[putZeroIndex] = arr[i] ^ arr[putZeroIndex];
                arr[i] = arr[i] ^ arr[putZeroIndex];
                putZeroIndex++;
            }
        }
        display(arr);
    }

    void display(vector<int> arr) {
       cout << "Array is [";
        for (int element: arr) {
            cout << " " << element;
        }
        cout << " ]" << endl;
    }

    public: Solution() {
        vector<int> arr_1 = {0, 1, 0, 3, 12};
        vector<int> arr_2 = {1, 0, 2, 0, 4, 5};
        moveZeroes(arr_1);
        moveZeroes(arr_2);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
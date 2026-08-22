#include <iostream>

using namespace std;

class Solution {
    void checkIfArrayIsSorted(int *arr, int size) {
        bool isSorted = true;

        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i+1]) {
                isSorted = false;
            }
        }

        if(isSorted) {
            cout << "Array is sorted." << endl;
        } else {cout << "Array is not sorted." << endl;}
    }
    
    public: Solution() {
        int arr_1[] = {1, 2, 3, 4, 5};
        int arr_2[] = {1, 2, 2, 4, 5};
        int arr_3[] = {1, 3, 2, 4};
        checkIfArrayIsSorted(arr_1, 5);
        checkIfArrayIsSorted(arr_2, 5);
        checkIfArrayIsSorted(arr_3, 4);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
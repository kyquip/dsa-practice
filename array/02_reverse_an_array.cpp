#include <iostream>

using namespace std;

class Solution {
    void reverseAnArray(int *arr, int size) {
        int start = 0, end = size - 1;
        while (start < end) {
            arr[start] = arr[start] ^ arr[end];
            arr[end] = arr[start] ^ arr[end];
            arr[start] = arr[start] ^ arr[end];
            start++;
            end--;
        }
    }

    void display(int *arr, int size) {
        cout << "[";
        for (int i = 0; i < size; i++) {
            cout << arr[i];
            if(i < size - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    public:
    Solution() {
        int arr_1[] = {1, 2, 3, 4, 5};
        int arr_2[] = {10, 20, 30, 40};
        cout << "Array Before: ";
        display(arr_1, 5);
        reverseAnArray(arr_1, 5);
        cout << "Array After: ";
        display(arr_1, 5);
        cout << endl << "Array Before: ";
        display(arr_2,  4);
        reverseAnArray(arr_2,  4);
        cout << "Array After: ";
        display(arr_2,  4);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
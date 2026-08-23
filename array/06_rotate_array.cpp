#include <iostream>

using namespace std;

class Solution {
    void rotateArray(vector<int> arr, int k) {
        if(k > arr.size()) k = k % arr.size();
        int i = 0, j = arr.size() - 1;
        while (i < j) {
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[i] ^ arr[j];
            arr[i] = arr[i] ^ arr[j];
            i++;
            j--;
        }
        i = 0, j = k;
        while (i < j) {
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[i] ^ arr[j];
            arr[i] = arr[i] ^ arr[j];
            i++;
            j--;
        }
        i = k, j = arr.size() - 1;
        while (i < j) {
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[i] ^ arr[j];
            arr[i] = arr[i] ^ arr[j];
            i++;
            j--;
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

    public: Solution () {
        vector<int> arr_1 = {1, 2, 3, 4, 5};
        vector<int> arr_2 = {1, 2, 3, 4, 5, 6, 7};
        rotateArray(arr_1, 2);
        rotateArray(arr_2, 3);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
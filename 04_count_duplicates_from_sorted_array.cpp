#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void countDuplicatesFromSortedArray(vector<int> arr) {
        int uniqueElements = 1;
        int currentElement = arr[0];

        for(int i = 1; i < arr.size(); i++) {
            if (arr[i] != currentElement) {
                currentElement = arr[i];
                uniqueElements++;
            }
        }
        cout << uniqueElements << " unique elements in array." << endl;
    }

    public: Solution() {
        vector<int> arr_1 = {1, 1, 2, 2, 3};
        vector<int> arr_2 = {0, 0, 1, 1, 1, 2, 2, 3};
        countDuplicatesFromSortedArray(arr_1);
        countDuplicatesFromSortedArray(arr_2);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
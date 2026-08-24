#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
    void twoSum(int *arr, int size, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < size; i++) {
            int complement = target - arr[i];
            if (map.find(arr[i]) != map.end()) {
                cout << complement << " " << arr[i] << " are the elements needed." << endl;
                break;
            } else {
                map.insert({complement, arr[i]});
            }
        }
    }

    public: Solution() {
        int arr_1[] = {2, 7, 11, 15};
        int arr_2[] = {3, 2, 4};
        twoSum(arr_1, 4, 9);
        twoSum(arr_2, 3, 6);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
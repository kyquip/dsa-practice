#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    void containsDuplicate(vector<int> arr) {
        unordered_set<int> set;
        for(int i: arr) {
            if(set.find(i) != set.end()) {
                cout << "Duplicate values is " << i  << "." << endl;
                return;
            } else {set.insert(i);}
        }
        cout << "There are no duplicate values in this array." << endl;
    }

    public: Solution() {
        vector<int> arr_1 = {1, 2, 3, 1};
        vector<int> arr_2 = {1, 2, 3, 4};
        containsDuplicate(arr_1);
        containsDuplicate(arr_2);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
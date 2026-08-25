#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void findAllNumbersDisappearedInAnArray(vector<int> &nums) {
        vector<int> arr(nums.size(), -1);
        for (int i: nums) arr[i - 1]++;

        cout << endl << "Number that are not present: [ ";
        for (int i = 0; i < nums.size(); i++)
            if(arr[i] < 0)
                cout << i + 1 << " ";
        cout << "]" << endl << endl;
    }

    public: Solution() {
        vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
        findAllNumbersDisappearedInAnArray(arr);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
// 14. Find All Numbers Disappeared in an Array
// Main concept: Index Marking
// Difficulty: Easy
// Question
// Given an array containing numbers from 1 to n, where some numbers appear twice and others don't appear at all, find all numbers that are missing.
// Example
// Input:
// [4, 3, 2, 7, 8, 2, 3, 1]

// Output:
// [5, 6]
// Numbers from 1 to 8 should exist.
// Missing:
// 5, 6
// Key Trick
// Use the array itself as a hash table.
// For every number x, mark:
// arr[x - 1]
// as visited.
// One common technique is to make the value negative.
// Example:
// x = 4
// Mark:
// arr[3]
// negative.
// After processing everything, any positive position indicates a missing number.
// Complexity
// Time: O(n)
// Space: O(1) extra space
#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int removeDuplicatesFromSortedArray(vector<int> &numbers) {
        if (numbers.empty())    return 0;
        int write = 1;
        for (int read = 1; read < numbers.size(); read++) {
            if (numbers[read] != numbers[write - 1]) {
                numbers[write] = numbers[read];
                write++;
            }
        }
        return write;
    }

    public: Solution() {
        vector<int> numbers = {1, 1, 2, 2, 3};
        cout << removeDuplicatesFromSortedArray(numbers) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
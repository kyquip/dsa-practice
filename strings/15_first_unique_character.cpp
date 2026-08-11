#include <iostream>

using namespace std;

class Solution {
    public:
        Solution(string s) {
            int arr[26];
            fill(arr, arr + 26, -1);
            for(char c: s) {
                int index = c - 97;
                arr[index] += 1;
            }
            for(char c: s)
                if(arr[int(c - 97)] == 0) {
                    cout << "First character is " << c << endl;
                    break;
                }
        }
};

int main() {
    Solution a("leetcode"), b("loveleetcode");
    return 0;
}
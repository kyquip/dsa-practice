#include <iostream>

using namespace std;

class Solution {
    public:
        string sortCharactersByFrequency(string s) {
            string result = "";
            int arr[26] = {0};

            for(char c: s) { arr[int(c - 97)]++; }
            for (int count = s.size(); count >= 1; count--) {
                for (char c = 'a'; c <= 'z'; c++) {
                    if (arr[c - 'a'] == count) {
                        result.append(count, c);
                    }
                }
            }
            return result;
        }
};

int main() {
    Solution s;
    cout << s.sortCharactersByFrequency("tree") << endl;
    cout << s.sortCharactersByFrequency("cccaaa") << endl;
    return 0;
}
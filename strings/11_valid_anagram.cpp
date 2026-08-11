#include <iostream>

using namespace std;

class Solution {
    public:
    bool anagram(string s, string t) {
        if(s.length() == t.length()) {
            int arr[26] = {0};
            for (int i = 0; i < s.length(); i++) {
                int sIndex = s[i] - 97;
                int tIndex = t[i] - 97;
                arr[sIndex] += 1;
                arr[tIndex] -= 1;
            }
            for(int i : arr) {
                if (i != 0) {
                    return false;
                }
            }
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    string s = "anagram", t = "nagaarm";
    Solution a;
    cout << a.anagram(s, t) << endl;
    return 0;
}
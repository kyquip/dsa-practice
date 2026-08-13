#include <iostream>

using namespace std;

class Solution {
    public:
        bool checkValidPalindrome(string s) {
            bool result = true;
            int left = 0, right = s.size() - 1;
            while(left <= right) {
                s[left] = tolower(s[left]);
                s[right] = tolower(s[right]);
                if (s[left] == ' ' || s[left] < 97 || s[left] > 122) { left++; continue; }
                if (s[right] == ' ' || s[right] < 97 || s[right] > 122) { right--; continue; }
                if (s[left] != s[right]) {
                    result = false;
                    break;
                }
                left++;
                right--;
            }
            return result;
        }
};

int main() {
    string s = "A man, a plan, a canal: Panama";
    Solution a;
    cout << a.checkValidPalindrome(s) << endl;
    return 0;
}
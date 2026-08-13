#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(string& s, int left, int right) {
        while (left < right) {
            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }
        return true;
    }

    bool checkValidPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (tolower(s[left]) != tolower(s[right])) {

                if (isPalindrome(s, left + 1, right))
                    return true;

                if (isPalindrome(s, left, right - 1))
                    return true;

                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};

int main() {
    string s = "abca";
    Solution a;
    cout << a.checkValidPalindrome(s) << endl;
    return 0;
}
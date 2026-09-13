#include <iostream>
#include <unordered_set>

using namespace std;

class Solution{
    int longestSubstringWithoutRepeatingCharacters(string &s) {
        int left = 0, right = 0, maxLength = 0;
        unordered_set<char> window;

        while (right < s.length()) {
            while (window.count(s[right])) {
                window.erase(s[left]);
                left++;
            }

            window.insert(s[right]);

            maxLength = max(maxLength, right - left + 1);

            right++;
        }
        
        return maxLength;
    }

    public: Solution() {
        string s = "abcabcbb";
        cout << "The length of the longest substring without repeating characters is " << longestSubstringWithoutRepeatingCharacters(s) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
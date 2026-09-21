#include <iostream>
#include <unordered_map>

using namespace std;

class Solution{
    int longestSubstringWithoutRepeatingCharacters(string &s) {
        int maxLength = 0, left = 0, right = 0;
        unordered_map<char, int> hashmap;
        
        while (right < s.length()) {
            while (hashmap[s[right]]) { hashmap.erase(s[left]); left++; }
            hashmap[s[right]]++;
            maxLength = max(maxLength, right - left + 1);
            right++;
        }

        return maxLength;
    }

    public: Solution() {
        string s = "abcabcbb";
        cout << "Length of longest substring without repeating characters is " << longestSubstringWithoutRepeatingCharacters(s) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
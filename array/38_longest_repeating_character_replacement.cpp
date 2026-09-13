#include <iostream>
#include <unordered_map>

using namespace std;

class Solution{
    int longestRepeatingCharacterReplacement(string &s, int k) {
        int left = 0, maxLength = 0, maxFreq = 0;
        unordered_map<char, int> freq;

        for (int right = 0; right < s.length(); right++) {
            freq[s[right]]++;
            maxFreq = max(maxFreq, freq[s[right]]);

            while ((right - left + 1) - maxFreq > k) {
                freq[s[left]]--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength; // 4
    }

    public: Solution() {
        string s = "AABABBA";
        cout << "Length longest Substring without repeating is " << longestRepeatingCharacterReplacement(s, 1) << endl;

    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
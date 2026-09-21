#include <iostream>

using namespace std;

class Solution{
    int longestRepeatingCharacterReplacement(string &s, int &k) {
        int left = 0, maxLength = 0, maxFreq = 0, freq[26] = {0};

        for (int right = 0; right < s.length(); right++) {
            freq[s[right] - 'A']++;
            maxFreq = max(maxFreq, freq[s[right] - 'A']);
            int windowLength = right - left + 1;

            while (windowLength - maxFreq > k) {
                freq[s[left] - 'A']++;
                left++;
                windowLength = right - left + 1;
            }

            maxLength = max(maxLength, windowLength);
        }

        return maxLength;
    }

    public: Solution() {
        string s = "AABABBA";
        int k = 1;
        cout << "Longest Substring is " << longestRepeatingCharacterReplacement(s, k) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>

using namespace std;

class Solution{
    string minimumWindowSubstring(string &s, string &t) {
        if (t.empty() || s.empty() || t.length() > s.length())  return "";

        unordered_map<char, int> need;
        for (char c : t)  need[c]++;

        unordered_map<char, int> window;
        int required = t.length(), left = 0, minLength = INT_MAX, minStart = 0;

        for (int right = 0; right < s.length(); right++) {
            char c = s[right];
            window[c]++;

            if (need.count(c) && window[c] <= need[c])  required--;

            while (required == 0) {
                int currentLength = right - left + 1;
                if (currentLength < minLength) {
                    minLength = currentLength;
                    minStart = left;
                }
                char leftChar = s[left];
                window[leftChar]--;
                if (need.count(leftChar) &&
                    window[leftChar] < need[leftChar]) {
                    required++;
                }
                left++;
            }
        }

        if (minLength == INT_MAX)  return "";
        return s.substr(minStart, minLength);
    }

    public: Solution() {
        string s = "ADOBECODEBANC", t = "ABC"; // Output: "BANC"
        cout << "Minimum Window Substring is " << minimumWindowSubstring(s, t) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
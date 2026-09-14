#include <iostream>
#include <vector>

using namespace std;

class Solution{
    bool permutationInString(string &s1, string &s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        for (char c : s1)   freq1[c - 'a']++;

        // First window of size s1.length()
        for (int i = 0; i < s1.size(); i++) {
            freq2[s2[i] - 'a']++;
        }

        // Check first window
        if (freq1 == freq2) return true;

        for (int i = s1.size(); i < s2.size(); i++) {

            // Add new character
            freq2[s2[i] - 'a']++;

            // Remove character leaving the window
            freq2[s2[i - s1.size()] - 'a']--;

            if (freq1 == freq2)
                return true;
        }


        
        return false;
    }


    public: Solution() {
        string s1 = "ab", s2 = "eidbaooo";
        cout << "It is substring of s2 = " << permutationInString(s1, s2) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
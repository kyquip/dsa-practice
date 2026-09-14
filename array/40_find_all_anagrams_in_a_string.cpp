#include <iostream>
#include <vector>

using namespace std;

class Solution{
    vector<int> findAllAnagramsInAString(string &s, string &p) {
        vector<int> result;

        if (p.length() > s.length())    return result;

        int pFreq[26] = {0};
        int windowFreq[26] = {0};

        for (char c : p)    pFreq[c - 'a']++;

        int left = 0;

        for (int right = 0; right < s.length(); right++) {
            windowFreq[s[right] - 'a']++;
            if (right - left + 1 > p.length()) {
                windowFreq[s[left] - 'a']--;
                left++;
            }

            if (right - left + 1 == p.length()) {
                bool isAnagram = true;
                for (int i = 0; i < 26; i++) {
                    if (pFreq[i] != windowFreq[i]) {
                        isAnagram = false;
                        break;
                    }
                }
                if (isAnagram)  result.push_back(left);
            }
        }
        return result;
    }

    public: Solution() {
        string s = "cbaebabacd", p = "abc"; // Output: [0, 6]
        vector<int> indices = findAllAnagramsInAString(s, p);
        cout << "All Indices are: ";
        for(int index: indices) cout << index << " ";
        cout << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
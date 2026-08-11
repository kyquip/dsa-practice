#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> result;

    if (p.length() > s.length())
        return result;

    vector<int> patternFreq(26, 0);
    vector<int> windowFreq(26, 0);

    for (int i = 0; i < p.length(); i++) {
        patternFreq[p[i] - 'a']++;
    }

    int windowSize = p.length();

    for (int i = 0; i < windowSize; i++) {
        windowFreq[s[i] - 'a']++;
    }

    if (patternFreq == windowFreq) {
        result.push_back(0);
    }

    for (int right = windowSize; right < s.length(); right++) {

        windowFreq[s[right] - 'a']++;

        int left = right - windowSize;
        windowFreq[s[left] - 'a']--;

        if (patternFreq == windowFreq) {
            result.push_back(left + 1);
        }
    }

    return result;
}

int main() {
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> result = findAnagrams(s, p);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string customSortString(string order, string s) {
    unordered_map<char, int> freq;

    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    string result;

    for (int i = 0; i < order.length(); i++) {
        char ch = order[i];

        while (freq[ch] > 0) {
            result += ch;
            freq[ch]--;
        }
    }

    for (unordered_map<char, int>::iterator it = freq.begin();
         it != freq.end();
         ++it) {

        while (it->second > 0) {
            result += it->first;
            it->second--;
        }
    }

    return result;
}

int main() {
    string order = "cba";
    string s = "abcd";
    cout << customSortString(order, s) << endl;
    return 0;
}
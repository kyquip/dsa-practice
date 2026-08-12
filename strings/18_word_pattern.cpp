#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        bool wordPattern(string pattern, string s) {
            stringstream ss(s);
            string word;
            vector<std::string> words;

            // Extract word by word //
            while (ss >> word) {
                words.push_back(word);
            }

            if (words.size() == pattern.length()) {
                unordered_map <string, char> map1;
                unordered_map <char, string> map2;
                for (int i = 0; i < pattern.length(); i++) {
                    char patt = pattern[i];
                    word = words[i];
                    if (map1.find(word) != map1.end()) {
                        if (map1[word] != patt) {
                            return false;
                        }
                    } else { map1.insert({ word, patt }); }
                    if (map2.find(patt) != map2.end()) {
                        if (map2[patt] != word) {
                            return false;
                        }
                    } else { map2.insert({ patt, word }); }
                }
            } else { return false; }
            return true;
        }
};

int main() {
    string pattern1 = "abba", s1 = "dog cat cat dog";
    string pattern2 = "abba", s2 = "dog cat god fish";
    Solution s;
    cout << "Solution 1 is " << s.wordPattern(pattern1, s1) << endl;
    cout << "Solution 2 is " << s.wordPattern(pattern2, s2) << endl;
    return 0;
}
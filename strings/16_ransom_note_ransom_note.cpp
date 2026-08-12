#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        Solution(string ransomNote, string magazine) {
            unordered_map <char, int> map;
            for(char c: magazine) {
                if (map.find(c) != map.end()) {
                    map[c]++;
                } else { map.insert({c, 1}); }
            }
            for(char c: ransomNote) {
                if (map.find(c) == map.end() || map[c] == 0) {
                    cout << "False" << endl;
                    return;
                }
                map[c]--;
            }
            cout << "True" << endl;
        }
};

int main() {
    Solution a("a", "b"), b("aa", "aab");
    return 0;
}
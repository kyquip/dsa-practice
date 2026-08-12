#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        Solution(string s, string t) {
            if (s.length() == t.length()) {
                bool output = true;
                unordered_map <char, char> map1;
                unordered_map <char, char> map2;

                for (int i = 0; i < s.length(); i++) {
                    char val1 = s[i], val2 = t[i];
                    if (map1.find(val1) != map1.end()) {
                        if (map1[val1] != val2) { output = false; }
                    } else { map1.insert({val1, val2}); }
                    if (map2.find(val2) != map2.end()) {
                        if (map2[val2] != val1) { output = false; }
                    } else { map2.insert({val2, val1}); }
                }
                if (output) {
                    cout << "True" << endl;
                } else { cout << "False" << endl; }
            } else { cout << "False" << endl; }
        }
};

int main() {
    string s1 = "egg", t1 = "add";
    string s2 = "foo", t2 = "bar";
    Solution a(s1, t1), b(s2, t2); 
    return 0;
}
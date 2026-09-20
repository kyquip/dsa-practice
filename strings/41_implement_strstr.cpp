#include <iostream>

using namespace std;

class Solution {
    public:
        int implementStrStr(string haystack, string needle) {
            int answer = -1;
            if (haystack.length() < needle.length() || needle.length() == 0) { return answer;}
            for (int i = 0; i < haystack.length(); i++) {
                if (haystack[i] == needle[0]) {
                    int tempLoopVar = i + 1;
                    bool matched = true;
                    for (int j = 1; j < needle.length(); j++) {
                        if (haystack[tempLoopVar] != needle[j]) {
                            matched = false;
                            break;
                        }
                        tempLoopVar++;
                    }
                    if (matched) { return i; }
                }
            }
            return answer;
        }
};

int main() {
    Solution s;
    cout << s.implementStrStr("hello", "ll") << endl << s.implementStrStr("aaaaa", "bba") << endl;
    return 0;
}
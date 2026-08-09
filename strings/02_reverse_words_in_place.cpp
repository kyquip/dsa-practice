#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
        void reverseWords(vector<char>& s) {
            reverse(s.begin(), s.end());
                int start = 0;
                int n = s.size();

                for (int end = 0; end <= n; end++) {
                    if (end == n || s[end] == ' ') {
                    reverse(s.begin() + start, s.begin() + end);
                    start = end + 1;
                }
            }
        }
};

int main() {
    vector<char> s = {'t','h','e',' ','s','k','y'};
    Solution sol;
    sol.reverseWords(s);
    for (char c : s)
        cout << c;
    cout << endl;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    string s;
    vector<int> p;

    int countPalindromicSubstrings(string str) {
        // Creating String to remove odd and even length separation //
        for(char c: str) {
            s+= string("#") + c;
        }
        s+='#';

        // Declaring length and p values with left and right //
        int n = s.length();
        p.assign(n, 0);
        int left = 1, right = 1;

        // Traversing String //
        for(int i = 1; i < n; i++) {
            p[i] = max(0, min(right - 1, p[left + right - i]));

            while(i + p[i] < n && i - p[i] >= 0 && s[i + p[i]] == s[i - p[i]]){
                p[i]++;
            }

            if(i + p[i] > right){
                left = i - p[i];
                right = i + p[i];
            }
        }
        int count = 0;
        for (int radius : p) count += radius / 2;
        return count;
    }
    public:
        Solution() {
            cout << countPalindromicSubstrings("aaa") << " must be 6." << endl;
        }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
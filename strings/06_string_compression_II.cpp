#include <iostream>

using namespace std;

class Solution {
    public:
        int len(int x) {
            if (x == 1) return 1;
            if (x < 10) return 2;
            if (x < 100) return 3;
            return 4;
        }
    
        int dp[101][101];
    
        int solve(string &s, int i, int k) {
            if (k < 0) return 1e9;
            if (i == s.size()) return 0;
        
            if (dp[i][k] != -1)
                return dp[i][k];
        
            int freq[26] = {};
            int best = 1e9, mx = 0;
        
            for (int j = i; j < s.size(); j++) {
                mx = max(mx, ++freq[s[j] - 'a']);
            
                int del = (j - i + 1) - mx;
            
                if (del <= k)
                    best = min(best,
                        len(mx) + solve(s, j + 1, k - del));
            }
        
            return dp[i][k] = best;
        }
    
        int compressString(string s, int k) {
            memset(dp, -1, sizeof(dp));
            return solve(s, 0, k);
        }
};

int main() {
    Solution s;
    cout << s.compressString("aaabcccd", 2) << endl;
}
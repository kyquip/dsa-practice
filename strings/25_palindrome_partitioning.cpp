#include <iostream>
#include <vector>

using namespace std;

class Solution {
  vector<vector <string>> result;
  vector<string> current;
  string s;

  bool isPalindrome(int start, int end) {
        while (start < end) {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }


  void palindromePartitioning(int start) {
    // We have consumed the entire string
    if (start == s.length()) {
      result.push_back(current);
      return;
    }
    // Try every possible ending position
    for (int end = start; end < s.length(); end++) {
      // Only choose palindrome substrings
      if (isPalindrome(start, end)) {
        current.push_back(s.substr(start, end - start + 1));
        // Solve the remaining string
        palindromePartitioning(end + 1);
        // Undo choice (backtrack)
        current.pop_back();
      }
    }
  }

  void display() {
    cout << "[\n";
    for (int i = 0; i < result.size(); i++) {
        cout << " [";
        for (int j = 0; j < result[i].size(); j++) {
            cout << "\"" << result[i][j] << "\"";
            if (j < result[i].size() - 1)
                cout << ", ";
        }
        cout << "]";
        if (i < result.size() - 1)
            cout << ",";
        cout << "\n";
    }
    cout << "]\n";
  }

  public:
    Solution() {
      cin >> s;
      palindromePartitioning(0);
      display();
    }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  Solution s;
  return 0;
}
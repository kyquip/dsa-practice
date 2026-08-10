#include <iostream>

using namespace std;

class Solution {
    public:
        int compareVersionNumbers(string first, string second) {
            int result = 1;
            if (first.length() > second.length()) {
                for (int i = 0; i < second.length(); i++) {
                    if (first[i] != second[i]) {
                        result = 0;
                    }
                }
            } else {
                for (int i = 0; i < first.length(); i++) {
                    if (first[i] != second[i]) {
                        result = 0;
                    }
                }
            }
            return result;
        }
};

int main() {
    string a = "1.01", b = "1.001";
    Solution s;
    cout << s.compareVersionNumbers(a, b) << endl;
    return 0;
}
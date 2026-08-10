#include <iostream>

using namespace std;

class Solution {
    public:
        string addBinary(string first, string second) {
            bool carry = false;
            string result = "";
            int sizeOfFirst = first.length(), sizeOfSecond = second.length();
            if (sizeOfFirst > sizeOfSecond) { second.insert(0, sizeOfFirst - sizeOfSecond, '0'); }
            else { first.insert(0, sizeOfSecond - sizeOfFirst, '0'); }
            for (int i = sizeOfFirst - 1; i > -1; i--) {
                if (first[i] == '1' && second[i] == '1') {
                    if (carry) {
                        result = '1' + result;
                    } else {
                        result = '0' + result;
                    }
                    carry = true;
                } else if (first[i] == '1' || second[i] == '1') {
                    result = carry ? '0' + result : '1' + result;
                } else {
                    result = carry ? '1' + result : '0' + result;
                    if (carry) {carry = false;}
                }
                if (carry) {
                    result = '1' + result;
                }
            }
            return result;
        }
};

int main() {
    string a = "1010", b = "1011";
    Solution s;
    cout << s.addBinary(a, b) << endl;
    return 0;
}
#include <iostream>

using namespace std;

class Solution {
    public:
        string addDecimal(string first, string second) {
            bool carry = false;
            string result = "";
            int sizeOfFirst = first.length(), sizeOfSecond = second.length();
            if (sizeOfFirst > sizeOfSecond) { second.insert(0, sizeOfFirst - sizeOfSecond, '0'); }
            else { first.insert(0, sizeOfSecond - sizeOfFirst, '0'); }
            for (int i = sizeOfFirst - 1; i >= 0; i--) {
                char number = first[i] + second[i] - '0';
                if (carry) { number++; }
                if (number >= '0' + 10) {
                    number -= 10;
                    carry = true;
                } else { carry = false; }
                result = number + result;
            }
            if (carry) { result = '1' + result; }
            return result;
        }
};

int main() {
    string a = "489", b = "77";
    Solution s;
    cout << s.addDecimal(a, b) << endl;
    return 0;
}
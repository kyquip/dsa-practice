#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        string writeZigZag(string word, int noOfRows) {
            if (noOfRows == 1) {
                return word;
            }
    
            string result = "";
            vector<string> rows(noOfRows);
            int currentRow = 0;
            bool direction = true;
            
            for (char c : word) {
                rows[currentRow] += c;
                if (currentRow == 0) {direction = true;}
                if (currentRow == noOfRows - 1) {direction = false;}
                if (currentRow < noOfRows - 1 && direction) {
                    currentRow++;
                } else {
                    currentRow--;
                    direction = false;
                }
            }

            for (string i: rows) {
                result += i;
            }

            return result;
        }
};

int main() {
    string word = "PAYPALISHIRING";
    Solution s;
    cout << s.writeZigZag(word, 3) << endl;
    return 0;
}
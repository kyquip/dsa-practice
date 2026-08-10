#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        string multiplyStrings(string first, string second) {

            if (first == "0" || second == "0")
                return "0";

            int m = first.length();
            int n = second.length();

            vector<int> result(m + n, 0);

            for (int i = m - 1; i >= 0; i--) {

                for (int j = n - 1; j >= 0; j--) {

                    int digit1 = first[i] - '0';
                    int digit2 = second[j] - '0';

                    int product = digit1 * digit2;

                    int pos1 = i + j;
                    int pos2 = i + j + 1;

                    int sum = product + result[pos2];

                    result[pos2] = sum % 10;
                    result[pos1] += sum / 10;
                }
        }

        string answer;

        int i = 0;

        while (i < result.size() && result[i] == 0)
            i++;

        while (i < result.size()) {
            answer += char(result[i] + '0');
            i++;
        }

        return answer;
    }
};

int main() {
    string first = "123", second = "456";
    Solution s;
    cout << s.multiplyStrings(first, second) << endl;
    return 0;
}
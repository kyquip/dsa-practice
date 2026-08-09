#include <iostream>

using namespace std;

class Solution{
    bool isVovel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ? true : false;
    }
    public:
        string reverseWord(string word) {
            int left = 0, right = word.length() - 1;
            while (left < right) {
                while (left < right && !isVovel(word[left])) {
                    left++;
                }
                while (left < right && !isVovel(word[right])) {
                    right--;
                }
                char temp = word[left];
                word[left] = word[right];
                word[right] = temp;
                left++;
                right--;
            }
            return word;
        }
};

int main() {
    string word = "leetcode";
    Solution solution;
    cout << solution.reverseWord(word) << endl;
    return 0;
}
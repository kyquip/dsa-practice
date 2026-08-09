#include <iostream>
#include <strings.h>

using namespace std;

string reverseWords(string s) {
    string currentWord;
    string result;

    for (char c : s) {
        if (c != ' ') {
            currentWord += c;
        } else {
            if (!currentWord.empty()) {
                if (result.empty())
                    result = currentWord;
                else
                    result = currentWord + ' ' + result;
                currentWord.clear();
            }
        }
    }

    if (!currentWord.empty()) {
        if (result.empty())
            result = currentWord;
        else
            result = currentWord + ' ' + result;
    }

    return result;
}

int main() {
    string inputString = "  the sky   is blue  ";
    string reversedString = reverseWords(inputString);
    cout << "Reversed String is: " << reversedString << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
#include <tuple>

using namespace std;

string rearrangeString(string s, int k) {
    if (k <= 1)
        return s;

    unordered_map<char, int> freq;

    for (char c : s)
        freq[c]++;

    priority_queue<pair<int, char> > maxHeap;

    for (unordered_map<char, int>::iterator it = freq.begin();
         it != freq.end();
         ++it) {

        maxHeap.push(make_pair(it->second, it->first));
    }

    queue<tuple<char, int, int> > cooldown;

    string result;
    int pos = 0;

    while (!maxHeap.empty() || !cooldown.empty()) {

        if (!cooldown.empty() &&
            get<2>(cooldown.front()) <= pos) {

            tuple<char, int, int> current = cooldown.front();
            cooldown.pop();

            char ch = get<0>(current);
            int count = get<1>(current);

            if (count > 0)
                maxHeap.push(make_pair(count, ch));
        }

        if (maxHeap.empty())
            return "";

        pair<int, char> current = maxHeap.top();
        maxHeap.pop();

        int count = current.first;
        char ch = current.second;

        result += ch;
        pos++;

        count--;

        if (count > 0) {
            cooldown.push(
                make_tuple(ch, count, pos + k - 1)
            );
        }
    }

    return result;
}

int main() {
    string s = "aabbcc";
    int k = 3;
    cout << rearrangeString(s, k) << endl;
    return 0;
}
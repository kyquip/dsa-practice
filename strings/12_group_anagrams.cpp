#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> strs) {
        unordered_map<string, vector<string>> mp;

        for (string word : strs) {
            vector<int> freq(26, 0);
            for (char c : word) {
                freq[c - 'a']++;
            }
            string key;
            for (int count : freq) {
                key += to_string(count) + "#";
            }
            mp[key].push_back(word);
        }

        vector<vector<string>> result;
        for (auto& pair : mp) {
            result.push_back(pair.second);
        }
        return result;
    }
};

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution s;
    vector<vector<string>> result = s.groupAnagrams(strs);

    for (vector<string> group : result) {
        cout << "[ ";
        for (string word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
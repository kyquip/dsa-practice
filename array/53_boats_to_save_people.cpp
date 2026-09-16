#include <iostream>

using namespace std;

class Solution{
  int boatsToSavePeople(vector<int> &people, int &limit) {
    sort(people.begin(), people.end());
    int left = 0, right = people.size() - 1, boats = 0;

    while (left <= right) {
      if (people[left] + people[right] <= limit) left++;
        right--;
        boats++;
    }

      return boats;
  } 

  public: Solution() {
    vector<int> people = {3, 2, 2, 1};
    int limit = 3;
    cout << "Possible arrangement: " << boatsToSavePeople(people, limit) << endl;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  Solution s;
  return 0;
}
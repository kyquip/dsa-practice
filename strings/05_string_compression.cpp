#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int compressArray(char *arr, int size) {
        int newSize = 0;
        int i = 0;

        while (i < size) {
            char current = arr[i];
            int count = 0;

            // Count consecutive characters
            while (i < size && arr[i] == current) {
                count++;
                i++;
            }

            arr[newSize++] = current;
            arr[newSize++] = '0' + count;
        }
        return newSize;
    }
};

int main() {
    int size = 7;
    char arr[] = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    Solution s;
    size = s.compressArray(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}
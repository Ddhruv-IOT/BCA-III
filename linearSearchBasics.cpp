#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Key found, return index
        }
    }
    return -1;  // Key not found
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Simple array
    int key = 30;

    int result = linearSearch(arr, 5, key);

    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}

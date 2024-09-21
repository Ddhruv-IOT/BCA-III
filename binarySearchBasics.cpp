#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Element found
        }
        else if (arr[mid] > target) {
            high = mid - 1; // Move to left half
        }
        else {
            low = mid + 1; // Move to right half
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int result = binarySearch(arr, n, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}

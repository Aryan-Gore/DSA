#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;   // not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5, key = 8;

    cout << binarySearch(arr, n, key);
    return 0;
}

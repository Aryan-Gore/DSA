#include <iostream>
using namespace std;

int firstPos(int arr[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1;   // move left
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

int lastPos(int arr[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1;   // move right
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4};
    int n = 6, target = 2;

    cout << firstPos(arr, n, target) << " "
         << lastPos(arr, n, target);

    return 0;
}

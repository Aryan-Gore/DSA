#include <iostream>
using namespace std;

// 🔹 Feasibility function (DEFINED FIRST)
bool isPossible(int arr[], int n, int m, int mid) {
    int students = 1;
    int pages = 0;

    for (int i = 0; i < n; i++) {
        if (pages + arr[i] <= mid) {
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];

            if (students > m)
                return false;
        }
    }
    return true;
}

// 🔹 Binary Search on Answer
int allocateBooks(int arr[], int n, int m) {
    int low = 0, high = 0, ans = -1;

    for (int i = 0; i < n; i++) {
        low = max(low, arr[i]); // max pages
        high += arr[i];         // total pages
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            high = mid - 1;   // minimize
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m);
    return 0;
}

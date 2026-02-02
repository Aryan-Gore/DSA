#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = 6;
    int k = 3;

    // Edge case
    if(k > n) {
        cout << "Invalid value of k";
        return 0;
    }

    int windowSum = 0;
    int maxSum = 0;

    // Calculate sum of first window
    for(int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    // Slide the window
    for(int i = k; i < n; i++) {
        windowSum += arr[i];        // add next element
        windowSum -= arr[i - k];    // remove previous element
        maxSum = max(maxSum, windowSum);
    }

    cout << "Maximum subarray sum of size " << k << " is: " << maxSum;

    return 0;
}

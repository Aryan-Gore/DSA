#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;   // Move right
        } else {
            high = mid;      // Move left (including mid)
        }
    }

    return low;  // Peak index
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int peakIndex = findPeakElement(arr);

    cout << "Peak element index: " << peakIndex << endl;
    cout << "Peak element value: " << arr[peakIndex] << endl;

    return 0;
}
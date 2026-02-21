#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int maxPages) {
    int students = 1;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxPages)  // safety check
            return false;

        if(sum + arr[i] > maxPages) {
            students++;
            sum = arr[i];

            if(students > m)
                return false;
        }
        else {
            sum += arr[i];
        }
    }
    return true;
}

int allocatePages(vector<int>& arr, int n, int m) {
    if(m > n) return -1;

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;

    while(low <= high) {
        int mid = low + (high - low) / 2;  // safe mid calculation

        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            high = mid - 1;   // try smaller answer
        }
        else {
            low = mid + 1;    // increase pages
        }
    }
    return ans;
}

int main() {
    int n, m;

    cout << "Enter number of books: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter pages of each book: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of students: ";
    cin >> m;

    int result = allocatePages(arr, n, m);

    if(result == -1)
        cout << "Allocation not possible\n";
    else
        cout << "Minimum possible maximum pages = " << result << endl;

    return 0;
}
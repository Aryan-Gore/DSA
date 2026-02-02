#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {1,2,5,2,14,2,1,2,2};
    int n = 9, k = 2;

    int temp[n];

    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }

//---------------or----------------

k = k % n;

// to rotate by right 
    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);


// to rotate by left 
    // reverse(arr, arr + k);
    // reverse(arr + k, arr + n);
    // reverse(arr, arr + n);

    cout<<endl;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";



    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {1,2,5,2,14,2,1,2,2};
    int n = 9;

    sort(arr, arr + n);

    int j = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    for(int i = 0; i <= j; i++)
        cout << arr[i] << " ";

    return 0;
}

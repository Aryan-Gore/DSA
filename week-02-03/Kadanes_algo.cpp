// Kadane's algorithm is used to find max sum of a subarray.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
  int arr[] = {1,2,5,-5,-9,5,6};
  int n = 7;
  
  int currentsum = arr[0];
  int maxsum = arr[0];

  
  for (int i = 1; i < n; i++){
        currentsum = max(arr[i],currentsum + arr[i]);
        maxsum = max(currentsum,maxsum);   
        }

    cout<<" Max sum is : "<<maxsum;   

    return 0;
}
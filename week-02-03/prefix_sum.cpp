//prefix sum - is a technique where each element stores sum of all element before it including itself in orignal array 

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    //taking input size of array
    cout<<"Enter size of array : "<<endl;
    cin>>n;

    int arr[n];
    int pref[n];

    //taking input elemnts of array
    cout<<" Enter elementss of array : "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    //printing elements of array
    cout<<"elementss of array are : ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // --------------main part computing the prefix sum--------------
        pref[0] = arr[0];

        for (int i = 1;i <= n;i++){

            pref[i] = pref[i-1] + arr[i];
        }


     //printing prefix sum  of array
    cout<<"prefix sum of array are : ";

    for (int i = 0; i < n; i++)
    {
        cout<<pref[i]<<" ";
    }
    return 0;
}
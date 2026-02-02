#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {0,2,1,2,5,1,0,1,4,1,0,1,4};
    int n  =  13;

    int j = 0; 

    for(int i = 0;i < n ;i++){

        if ( arr[i] != 0){

            swap(arr[i],arr[j]);
            j++;
        }
    }

    
    for(int i = 0;i < n ;i++){

        cout << arr[i] <<" ";
    }


    return 0;
}
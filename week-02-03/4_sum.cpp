#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int arr[] = {1,2,5,2,4,2,1,4,6};
    int n = 9;
    int target = 10; 

    vector<vector<int>> ans ;

    sort(arr,arr+n);

    for(int i = 0; i<n; i++){

            if( i>0 && arr[i] == arr[i-1]) continue;

        for(int j = i+1; j<n; ){

            int p = j+1 , q = n-1;

            while(p<q){

                int sum = arr[i] + arr[j] + arr[p] + arr[q];

                if(sum < target ){
                    p++;
                }

                else if(sum > target ){
                    q--;
                }
                else{
                    ans.push_back({arr[i], arr[j],arr[p],arr[q]});
                    p++,q--;
                }

                while(p<q && arr[p] == arr[p-1]){ 
                    p++;
                }

                 while (p < q && arr[q] == arr[q + 1]) q--;
            }
            j++;
            while(j < n && arr[j] == arr[j-1]) j++;


        }
    }
    return 0;
}

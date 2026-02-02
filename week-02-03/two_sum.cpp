#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    
    int arr[] = {2,8,5,5,6,3,4};
    int n = 7 ;
    int target = 10;

    unordered_map <int,int> mp;

    for (int i = 0; i < n; i++)
    {

       int  need = target - arr[i];

      if(mp.find(need) != mp.end()){

            cout<<mp[need] <<" "<<i;
            return 0;
      }

      mp[arr[i]] = i;

    }

        cout<<" not found!";
    

   
}
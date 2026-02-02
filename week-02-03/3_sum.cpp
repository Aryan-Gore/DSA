    #include <iostream>
    #include <algorithm>
    #include <vector>
    using namespace std;

    int main() {
        
        int arr[ ] = {1,-1,0,2,-2,4,0,1,-1};
        int n = 9;
        
        sort(arr,arr+n);
        //vector to store the triplet 
        vector<vector<int>> ans;

        for(int i = 0;i < n; i++){
        
            //to skip same no. of i 
            if (i > 0 && arr[i] == arr[i-1])
                continue;

            // j and k are pointers;
            int  j = i+1, k = n-1;

            while(j < k){

                int sum = arr[i] + arr[j] + arr[k];

                if (sum < 0){
                    j++;
                }

                else if (sum > 0){
                    k--;
                }
                else {
                ans.push_back({arr[i],arr[j],arr[k]});
                        j++, k--;
                    
                        while (j<k && arr[j] == arr[j-1])
                        j++;
                    }
                    }
                    }


              for (auto triplet : ans) {
        cout << triplet[0] << " "<< triplet[1] << " "<< triplet[2] << endl;
    }
    
        return 0;
    }
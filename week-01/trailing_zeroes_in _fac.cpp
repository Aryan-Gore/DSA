#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 100;
    int count = 0;

     while(n>0){

        n/=5;
        count+=n;

     }

      cout << "Trailing zeroes = " << count;

    return 0;
}
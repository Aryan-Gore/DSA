#include <iostream>
using namespace std;

long long pow(long long x,long long n){
   long long result = 1;

   while(n > 0){

      if(n % 2 == 1){
         result = result * x;
      }

      x*=x;
      n/=2;

   }

   return result;
}

int main() {

    int x = 3,n = 5;

    cout<<"fast power output = "<<pow(x,n);

    return 0;
}

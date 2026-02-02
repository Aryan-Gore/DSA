#include <iostream>
using namespace std;
int factorial_itrative(int n){

    if (n == 0)
            return 1;
            
    int fac = 1;
    for(int i = 1;i <= n; i++){
        fac*=i; 
    }
    return fac;

}

int factorial_recursive(int n){
      if(n==0)
            return 1;

        return n*factorial_recursive(n-1);
}
   

int main() {

    int n;


    cout << "Enter a number: ";
    cin >> n;
    
    factorial_itrative(n);
    factorial_recursive(n);
   
}

#include <iostream>
using namespace std;

int main() {

    int n;
    bool isprime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n == 1){
        isprime = false;
    }
    else{
         for(int i = 2; i*i<=n; i++){
    
            if(n%i == 0){
               isprime = false;
                 break;
    }
    }
}
    if(isprime)
    cout<<" Enters no. is prime";
    else
        cout <<"Enteres no. is not prime";
    return 0;

}

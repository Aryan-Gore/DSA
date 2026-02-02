#include <iostream>
using namespace std;

int gcd(int a,int b){

    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp ;
    }

    return a;
}

int gcd2(int a , int b){
    if(a%b == 0) return b;

  return gcd2(a,a%b);
}

int main() {

    int a,b;

    cout << "enter a 1st integer ";
    cin >> a;

    cout << "enter a 2nd integer ";
    cin >> b;

    cout<<"GCD is --> "<<gcd(a,b)<<endl;
     cout<<"GCD is = "<<gcd2(a,b);


    return 0;
}

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

int main() {

    int a,b;

    cout << "enter a 1st integer ";
    cin >> a;

    cout << "enter a 2nd integer ";
    cin >> b;

     if (a == 0 || b == 0) {
        cout << "LCM is --> 0" << endl;
    } else {
        cout << "LCM is --> " << (a / gcd(a, b)) * b << endl;
    }


    return 0;
}

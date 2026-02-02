#include <iostream>
using namespace std;

int main() {

    int n,r=0,a=0;

    cout << "enter a +ve integer to reverse";
    cin >> n;

    while(n!=0){
        a = n%10;
        r = r*10+a;
        n = n/10;
    }

    cout <<"After Reverse:"<<r;

    return 0;
}

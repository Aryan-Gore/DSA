#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if(n == 0 || n == 1)
        return n;

    return fib(n-1) + fib(n-2);
}

int main() 
{
     int n;
    cout << "Enter n: ";
    cin >> n;
     
    int  a = 0, b = 1;

    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    
    return 0;
}
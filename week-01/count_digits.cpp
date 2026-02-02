#include <iostream>
using namespace std;

int main() {
    // int count = 0,n; not best case do not handle digits more than 10 therefor

    long long count = 0;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            count++;
        }
    }

    cout << "No. of digits are " << count;
    return 0;
}

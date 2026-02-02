#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, digit;

    cout << " Enter a no. : ";
    cin >> n;

    int temp = n, digits = 0, sum = 0;

    // count digits
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    // check for iamstrong
    while (temp != 0)
    {

        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == n)
    {
        cout << "It's a Armstrong no.";
    }
    else
        cout << "not a Armstrong no.";

    return 0;
}

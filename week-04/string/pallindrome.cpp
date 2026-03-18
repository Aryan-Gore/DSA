#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;

    while (i < j) {
        // skip non-alphanumeric characters
        if (!isalnum(s[i])) {
            i++;
        } 
        else if (!isalnum(s[j])) {
            j--;
        } 
        else {
            // compare after converting to lowercase
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    
    if (isPalindrome(s))
        cout << "True";
    else
        cout << "False";

    return 0;
}
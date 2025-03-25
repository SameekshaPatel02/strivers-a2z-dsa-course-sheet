#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int revNum = 0;
    int dup = n;

    while (n > 0) {

        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if (dup == revNum) {
        // If equal, return true indicating it's a palindrome
        return true;
    } else {
        // If not equal, return false indicating it's not a palindrome
        return false;
    }
}


int main() {
    int number; 
    cout << "Enter a number: ";
    cin >> number;

    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
                            
                        
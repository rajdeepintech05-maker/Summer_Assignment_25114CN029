// Q8: Write a program to Check whether a number is palindrome.
#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num > 0) {
        digit = num % 10;                    // Get last digit
        reverse = reverse * 10 + digit;     // Reverse the number
        num = num / 10;                     // Remove last digit
    }

    if (originalNum == reverse) {
        cout << "Palindrome Number";
    } else {
        cout << "Not a Palindrome Number";
    }

    return 0;
}
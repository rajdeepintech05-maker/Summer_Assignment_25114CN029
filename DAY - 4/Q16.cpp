// Q16 : Write a program to Print Armstrong numbers in a range.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        int originalNum = num, remainder, result = 0, n = 0;

        // Count digits
        int temp = originalNum;

        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = originalNum;

        // Calculate Armstrong sum
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        // Check Armstrong number
        if (result == originalNum) {
            cout << originalNum << " ";
        }
    }

    return 0;
}
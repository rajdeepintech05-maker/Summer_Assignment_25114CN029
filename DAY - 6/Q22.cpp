// Q22: Write a program to Convert binary to decimal.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary, decimal = 0, remainder, i = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary != 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * pow(2, i);
        binary = binary / 10;
        i++;
    }

    cout << "Decimal equivalent = " << decimal;

    return 0;
}
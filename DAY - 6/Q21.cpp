// Q21: Write a program Convert decimal to binary.
#include <iostream>
using namespace std;

int main() {
    int decimal, binary = 0, place = 1, remainder;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    int num = decimal;

    while (num > 0) {
        remainder = num % 2;
        binary = binary + (remainder * place);
        place = place * 10;
        num = num / 2;
    }

    cout << "Binary equivalent = " << binary;

    return 0;
}
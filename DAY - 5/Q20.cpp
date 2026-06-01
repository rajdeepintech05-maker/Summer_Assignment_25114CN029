//  Q20 : Write a program to Find largest prime factor.
#include <iostream>
using namespace std;

int main() {
    int num, largestPrimeFactor = 1;

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 2; i <= num; i++) {
        while(num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }

    cout << "Largest Prime Factor is: " << largestPrimeFactor;

    return 0;
}
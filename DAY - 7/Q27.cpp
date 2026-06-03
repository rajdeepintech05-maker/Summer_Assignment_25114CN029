// Q27: Write a program to Recursive sum of digits.
#include <iostream>
using namespace std;

// Recursive function to find sum of digits
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits = " << sumOfDigits(num);

    return 0;
}
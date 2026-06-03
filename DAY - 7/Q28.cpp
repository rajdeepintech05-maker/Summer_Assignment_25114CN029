// Q28: Write a program to Recursive reverse number.
#include <iostream>
using namespace std;

int reverseNum = 0;

// Recursive function to reverse number
int reverse(int n)
{
    if (n == 0)
        return reverseNum;

    reverseNum = reverseNum * 10 + (n % 10);

    return reverse(n / 10);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number = " << reverse(num);

    return 0;
}
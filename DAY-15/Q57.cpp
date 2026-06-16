/*
Write a program to Reverse array.
*/
#include<iostream>
using namespace std;

int main() {
    int n, arr[100];
    cout << "Enter the size of array: ";
    cin >> n;
    if (n <= 0 || n > 100) {
        cout << "Please enter size between 1 and 100.";
        return 0;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Reversed array is: ";
    for (int i = n - 1; i >= 0; i--) cout << arr[i] << " ";
    return 0;
}

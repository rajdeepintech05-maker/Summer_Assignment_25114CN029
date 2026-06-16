/*
Write a program to Rotate array right.
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

    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = last;

    cout << "Array after right rotation: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}

/*
Write a program to Rotate array left.
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

    int first = arr[0];
    for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
    arr[n - 1] = first;

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}

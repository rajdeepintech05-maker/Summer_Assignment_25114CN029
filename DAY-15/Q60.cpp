/*
Write a program to Move zeroes to end.
*/
#include<iostream>
using namespace std;

int main() {
    int n, arr[100], index = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    if (n <= 0 || n > 100) {
        cout << "Please enter size between 1 and 100.";
        return 0;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) arr[index++] = arr[i];
    }
    while (index < n) arr[index++] = 0;

    cout << "Array after moving zeroes to end: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}

/*
Write a program to Find missing number in array.
*/
#include<iostream>
using namespace std;

int main() {
    int n, arr[100], sum = 0;
    cout << "Enter n for numbers from 1 to n: ";
    cin >> n;
    if (n <= 1 || n > 101) {
        cout << "Please enter n between 2 and 101.";
        return 0;
    }

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    cout << "Missing number is: " << total - sum;
    return 0;
}

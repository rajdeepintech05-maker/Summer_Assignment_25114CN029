/*
Write a program to Remove duplicates from array.
*/
#include<iostream>
using namespace std;

int main() {
    int n, arr[100], uniqueArr[100], uniqueCount = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    if (n <= 0 || n > 100) {
        cout << "Please enter size between 1 and 100.";
        return 0;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        bool exists = false;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == uniqueArr[j]) exists = true;
        }
        if (!exists) uniqueArr[uniqueCount++] = arr[i];
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++) cout << uniqueArr[i] << " ";
    return 0;
}

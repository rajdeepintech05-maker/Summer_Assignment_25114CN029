/*
Write a program to Linear search.
*/
#include<iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter the size of array: ";
    cin >> n;
    if (n <= 0 || n > 100) {
        cout << "Please enter size between 1 and 100.";
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << key << " found at position " << i + 1;
            return 0;
        }
    }

    cout << key << " not found.";
    return 0;
}

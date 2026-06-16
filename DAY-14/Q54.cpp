/*
Write a program to Frequency of an element.
*/
#include<iostream>
using namespace std;

int main() {
    int n, key, count = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    if (n <= 0 || n > 100) {
        cout << "Please enter size between 1 and 100.";
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to find frequency: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) count++;
    }

    cout << "Frequency of " << key << " is: " << count;
    return 0;
}

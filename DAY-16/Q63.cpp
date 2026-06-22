/*
Write a program to Find pair with given sum.
*/
#include<iostream>
using namespace std;

int main() {
    int n, arr[100], target;
    bool found = false;
    cout << "Enter the size of array: ";
    cin >> n;
    if (n <= 0 || n > 100) {
        cout << "Please enter size between 1 and 100.";
        return 0;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter required sum: ";
    cin >> target;

    cout << "Pairs with given sum are: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ") ";
                found = true;
            }
        }
    }

    if (!found) cout << "None";
    return 0;
}

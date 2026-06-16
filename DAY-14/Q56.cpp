/*
Write a program to Find duplicates in array.
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    bool found = false;
    cout << "Enter the size of array: ";
    cin >> n;
    if (n <= 0 || n > 100) {
        cout << "Please enter size between 1 and 100.";
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Duplicate elements are: ";
    for (int i = 0; i < n; i++) {
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) alreadyPrinted = true;
        }
        if (alreadyPrinted) continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found) cout << "None";
    return 0;
}

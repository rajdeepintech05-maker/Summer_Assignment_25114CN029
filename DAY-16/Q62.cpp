/*
Write a program to Find maximum frequency element.
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

    int maxCount = 0, answer = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > maxCount) {
            maxCount = count;
            answer = arr[i];
        }
    }

    cout << "Maximum frequency element is: " << answer << endl;
    cout << "Frequency is: " << maxCount;
    return 0;
}

/*
Write a program to Second largest element.
*/
#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    if (n < 2 || n > 100) {
        cout << "Please enter size between 2 and 100.";
        return 0;
    }

    int arr[100], largest = INT_MIN, secondLargest = INT_MIN;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) cout << "Second largest element does not exist.";
    else cout << "Second largest element is: " << secondLargest;
    return 0;
}

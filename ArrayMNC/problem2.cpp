// sum of all subarrays of an given array
#include <bits/stdc++.h>
using namespace std;

void sumOfSubarray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += arr[j];
            cout << sum << endl;
        }
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[6] = {12,45,23,51,19,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    cout << endl;
    sumOfSubarray(arr, n);
}
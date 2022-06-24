// max till i
#include <iostream>
#include <algorithm>
// #include <climits>
#include <bits/stdc++.h>
using namespace std;

void maxValue(int arr[], int n) {
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        // if(arr[i]>mx) {
        //     mx = arr[i];
        // }
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }
    cout << "maxValue: " << mx << endl;
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
    maxValue(arr, n);
}
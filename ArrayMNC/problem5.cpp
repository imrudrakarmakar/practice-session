// Given an array arr[] of size N. The task is to find the first repeating element in an
// array of integers, i.e., an element that occurs more than once and whose index of
// first occurrence is smallest.

#include <bits/stdc++.h>
using namespace std;

void firstRepeadingElement(int a[], int n) {
    const int N = 1000;
    int idx[N];

    for(int i = 0; i < N; i++) {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for (int i = 0; i < n; i++) {
        if(idx[a[i]] != -1) {
            minidx = min(minidx, idx[a[i]]);
        } else {
            idx[a[i]] = i;
        }
    }

    if(minidx == INT_MAX) {
        cout << "-1" << endl;
    } else {
        cout << minidx+1 << endl;
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[8] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    cout << endl;
    firstRepeadingElement(arr, n);
}
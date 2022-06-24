// Given an unsorted array A of size N of non-negative integers, find a continuous
// subarray which adds to a given number S.

#include <bits/stdc++.h>
using namespace std;

void findSubarray(int a[], int n, int s) {
    int i = 0, j = 0, st = -1, en = -1, sum = 0;
    while (j<n && sum+a[j] <= s) {
        sum += a[j];
        j++;
    }

    if(sum == s) {
        cout << i+1 << " " << j << endl;
        return;
    }

    while (j<n) {
        sum += a[j];
        while (sum > s) {
            sum -= a[i];
            i++;
        }

        if(sum == s) {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[8] = {1, 2, 3, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s;
    cin >> s;   //input 12
    display(arr, n);
    cout << endl;
    findSubarray(arr, n, s);
}
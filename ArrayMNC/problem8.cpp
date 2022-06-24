// max subarray
#include <bits/stdc++.h>
using namespace std;

void maxsubarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            for(int k = i; k < n; k++) {
                cout << arr[k] << " ";
            } cout << endl;
        }
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[] = {-1, 4, 7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    maxsubarray(arr, n);    
}
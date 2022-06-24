// Find the smallest positive missing number in the given array.
// Example: [0, -10, 1, 3, -20], Ans = 2

#include <bits/stdc++.h>
using namespace std;

void findSmallestPosiMissingNo(int a[], int n) {
    const int N = 1000;
    bool check[N];
    for(int i=0; i<N; i++) {
        check[i] = false;
    }

    for(int i=0; i<n; i++) {
        if(a[i] >= 0) {
            check[a[i]] = true;
        }
    }
    int ans = -1;
    for(int i=1; i<N; i++) {
        if(check[i] == false) {
            ans = i;
            break;  
        }
    }

    cout << ans << endl;
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[6] = {0, -9, 1, 3, -4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    cout << endl;
    findSmallestPosiMissingNo(arr, n);
}
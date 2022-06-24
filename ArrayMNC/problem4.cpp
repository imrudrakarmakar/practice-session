// Isyana is given the number of visitors at her local theme park on N consecutive
// days. The number of visitors on the i-th day is Vi

// . A day is record breaking if it

// satisfies both of the following conditions:
// ● The number of visitors on the day is strictly larger than the number of
// visitors on each of the previous days.
// ● Either it is the last day, or the number of visitors on the day is strictly larger
// than the number of visitors on the following day.
// Note that the very first day could be a record breaking day!
// Please help Isyana find out the number of record breaking days.


#include <bits/stdc++.h>
using namespace std;

void recordBreakers(int a[], int n) {
    a[n+1];
    a[n] = -1;

    if(n == 1) {
        cout << "1" << endl;
        return;
    }

    int ans = 0;
    int mx = -1;

    for(int i = 0; i < n; i++) {
        if(a[i]>mx && a[i]>a[i+1]) {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << ans << endl;
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[8] = {1, 2, 0, 7, 2, 0, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    cout << endl;
    recordBreakers(arr, n);
}
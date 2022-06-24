// Pair Sum Poblem 

#include <bits/stdc++.h>
using namespace std;

// bool pairSum(int arr[], int n, int k) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j < n; j++) {
//             if(arr[i] + arr[j] == k) {
//                 cout << i << " " << j << endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// optimized
bool pairSum(int arr[], int n, int k) {
    int low = 0, high = n-1;
    
    while(low < high) {
        if(arr[low] + arr[high] == k) {
            cout << low << " " << high << endl;
            return true;
        } else if(arr[high] + arr[low] > k) {
            high--;
        } else {
            low++;
        }
    }
    return false;
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21}; // sorted array
    // if the array is not sorted, then add sorted function
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=31;
    display(arr, n);
    cout << pairSum(arr, n, k);    
}
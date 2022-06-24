// Maximum Subarray Sum 
#include <bits/stdc++.h>
using namespace std;

// void maxSubarraySum(int arr[], int n) {
//     int maxSum = INT_MIN;
//     for(int i = 0; i < n; i++) {
//         for(int j = i; j < n; j++) {
//             int sum = 0;
//             for(int k = i; k <= j; k++) {
//                 sum += arr[k];
//             } 
//             maxSum = max(sum, maxSum);
//         }
//     }
//     cout << maxSum << endl;
// }


// Cumulative sum approach
// void maxSubarraySum(int arr[], int n) {
//     int currsum[n+1];
//     currsum[0] = 0;

//     for(int i = 1; i <= n; i++) {
//         currsum[i] = currsum[i-1] + arr[i-1];
//     }

//     int maxSum =INT_MIN;
//     for(int i = 1; i <= n; i++) {
//         int sum = 0;
//         for(int j = 0; j <= i; j++) {
//             sum = currsum[i] - currsum[j];
//             maxSum = max(sum, maxSum);
//         }
//     }

//     cout << maxSum << endl;
// }

//Kadane Algo [VVVVVVVIIIIIIIIPPPPPPP]
void maxSubarraySum(int arr[], int n) {
    int currsum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++) {
        currsum += arr[i];
        if(currsum < 0) {
            currsum = 0;
        }
        maxSum = max(maxSum, currsum);
    }

    cout << maxSum << endl;
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[] = {1, -4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    maxSubarraySum(arr, n);    
}
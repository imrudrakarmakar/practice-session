// max Circular Subarray
#include <bits/stdc++.h>
using namespace std;

// KADANE ALGORITHM 
int kadane(int arr[], int n) {
    int currsum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        currsum += arr[i];
        if(currsum < 0) {
            currsum = 0;
        }
        maxSum = max(maxSum, currsum);
    }
    return maxSum;
}

void circularSum(int arr[], int n) {
    int wrapsum;
    int nonweapsum;

    nonweapsum = kadane(arr, n);
    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        totalSum += arr[i];
        arr[i] =- arr[i];
    }

    wrapsum = totalSum + kadane(arr, n);

    cout << max(wrapsum, nonweapsum) << endl;
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {
    int arr[] = {4, -4, 6, -6, 10, -11, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    circularSum(arr, n);    
}
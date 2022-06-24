#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i=1; i < n; i++) {
        int curr = arr[i];
        int j = i-1;
        while(arr[j]>curr && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[6] = {12,45,23,51,19,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    cout << endl;
    insertionSort(arr, n);
    display(arr, n);
}
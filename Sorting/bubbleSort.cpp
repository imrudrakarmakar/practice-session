#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int counter = 1;
    while(counter < n) {
        for(int i=0; i<n-counter; i++) {
            if(arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
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
    bubbleSort(arr, n);
    display(arr, n);
}
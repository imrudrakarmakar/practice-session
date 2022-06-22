#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int num) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int num;
    cout << "Enter the number you want to search for" ;
    cin >> num;

    cout << linearSearch(arr, n, num);
    return 0;
}
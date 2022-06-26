// 2D array input and output
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m;
    cin >> n >> m;
    int arr[n][m];

    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is" << endl;
    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search: ";
    int x;
    cin >> x;
    bool flag;
    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            if(arr[i][j] == x) {
                cout << "Found at " << i << "," << j << endl;
                flag = true;
            } 
        }
    }

    if(flag == true) {
        cout << "Found" << endl;
    } else {
        cout << "Not found." << endl;
    }

    return 0;
}
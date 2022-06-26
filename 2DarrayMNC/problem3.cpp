// Given a square matrix A & its number of rows (or columns) N, return the transpose of A.
// The transpose of a matrix is the matrix flipped over it's main diagonal,
// switching the row and column indices of the matrix.

#include <bits/stdc++.h>
using namespace std;

void display(int *arr, int n, int m) {
    cout << "Matrix is" << endl;
    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            cout << *((arr+i*m) + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n=3, m=3;
    int arr[n][m] = {{1,2,3},{4,5,6},{7,8,9}};

    cout << "Matrix is" << endl;
    display((int *)arr, n, m);

    for(int i=0; i < n; i++) {
        for(int j=i; j < m; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout << "Transpose Matrix is" << endl;
    display((int *)arr, n, m);

    return 0;
}

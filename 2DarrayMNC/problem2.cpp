// Spiral Order Print 

#include <iostream>
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
    int n=5,m=6;
    int arr[5][6] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,26, 27, 28, 29, 30};

    display((int *)arr, n, m);

    int row_start = 0, row_end = n-1, col_start = 0, col_end = m-1;

    while(row_start <= row_end && col_start <= col_end) {

        // for row_start
        for(int col = col_start; col <= col_end; col++) {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // for col_end
        for(int row = row_start; row <= row_end; row++) {
            cout << arr[row][col_end] << " ";
        }
        col_end--;

        // for row_end
        for(int col = col_end; col >= col_start; col--) {
            cout << arr[row_end][col] << " ";
        }
        row_end--;

        // for col_start
        for(int row = row_end; row >= row_start; row--) {
            cout << arr[row][col_start] << " ";
        }
        col_start++;
    }

    return 0;
}
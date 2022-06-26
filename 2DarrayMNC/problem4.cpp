// Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
// multiply these matrices and output the multiplied matrix.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1=3, n2=4, n3=3;
    int m1[n1][n2] = {{2,4,1,2},{8,4,3,6},{1,7,9,5}};
    int m2[n2][n3] = {{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
    int ans[n1][n3];

    for(int i=0; i < n1; i++) {
        for(int j=0; j < n3; j++) {
            ans[i][j] = 0;
        }
    }

    for(int i=0; i < n1; i++) {
        for(int j=0; j < n3; j++) {
            for(int k=0; k < n2; k++) {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Matrix is" << endl;
    for(int i=0; i < n1; i++) {
        for(int j=0; j < n3; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}
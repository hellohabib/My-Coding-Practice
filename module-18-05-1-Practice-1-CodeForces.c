#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
// input
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
//Primary Diagnonal
    int priDiag=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                priDiag=priDiag+a[i][j];
            }
        }
    }
//Secondary Diagnonal
    int secDiag=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j==n-1){
                secDiag=secDiag+a[i][j];
            }
        }
    }
    int diff=priDiag-secDiag;
    diff=abs(diff);
    printf("%d", diff);

    return 0;
}

// CodeForces Problem
// T. Matrix
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

// Input
// First line contains a number N (1 ≤ N ≤ 100) described above.

// Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

// Output
// Print the absolute difference between the summation of the matrix main diagonals.

// Example
// InputCopy
// 4
// 1 5 12 1
// 2 -4 6 7
// 3 8 5 9
// 3 5 23 -6
// OutputCopy
// 22
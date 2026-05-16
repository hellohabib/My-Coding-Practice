#include<stdio.h>
int main(){
//-- START
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int condition=0;
//-- Array input
    for (int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            scanf("%d", &a[i][j]);
        }
    }
//-- Test full array print
    // for (int i=0; i<r; i++){
    //     for(int j=0; j<r; j++){
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    if(c==r){
        condition++;
    }
    int priDiag=0;
    for (int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            if(i==j){
                if(a[i][j]==1){
                    priDiag++;
                }
            }
        }
    }
    if(priDiag==r){
        condition++;
    }
    int secDiag=0;
    for (int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            if((i+j)==(r-1)){
                if(a[i][j]==1){
                    secDiag++;
                }
            }
        }
    }
    if(secDiag==r){
        condition++;
    }
    int rest=0;
        for (int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            if((i!=j)&&((i+j)!=(r-1))){                
                rest=rest+a[i][j];                
            }
        }
    }
    if(rest==0){
        condition++;
    }
    if (condition==4){
        printf("YES");
    }
    else{
        printf("NO");
    }
//--END
    return 0;
}

//-- HackerRank Problem

// Problem Statement

// You will be given a matrix of size N * M. You need to tell if it is Jadu Matrix or not.

// Note: A Jadu Matrix is a square matrix, where the values of primary diagonal and secondary diagonal are 1. Rest of the cell will contain only 0.

// Input Format

// First line will contain N, the row and M, the column of the matrix.
// Then the N * M sized matrix will be given.
// Constraints

// 1 <= N, M <= 100
// 0 <= Values <= 100
// Output Format

// Ouput "YES" if the matrix is Jadu Matrix, otherwise output "NO" without the quotation marks.
// Sample Input 0

// 5 5
// 1 0 0 0 1
// 0 1 0 1 0
// 0 0 1 0 0
// 0 1 0 1 0
// 1 0 0 0 1
// Sample Output 0

// YES
// Sample Input 1

// 5 5
// 1 0 0 0 1
// 0 1 0 1 0
// 0 0 0 0 0
// 0 1 0 1 0
// 1 0 0 0 1
// Sample Output 1

// NO
// Sample Input 2

// 5 5
// 1 0 0 0 1
// 0 1 0 1 0
// 0 0 1 0 1
// 0 1 0 1 0
// 1 0 0 0 1
// Sample Output 2

// NO
// Sample Input 3

// 5 5
// 2 0 0 0 1
// 0 1 0 1 0
// 0 0 1 0 0
// 0 1 0 1 0
// 1 0 0 0 1
// Sample Output 3

// NO
// Sample Input 4

// 6 6
// 1 0 0 0 0 1 
// 0 1 0 0 1 0 
// 0 0 1 1 0 0 
// 0 0 1 1 0 0 
// 0 1 0 0 1 0 
// 1 0 0 0 0 1 
// Sample Output 4

// YES
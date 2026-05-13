#include<stdio.h>
void printUsingRecur(int n, int nTh){
    if(nTh>n)
    {
        return;
    }
    printf("I love Recursion\n");
    printUsingRecur(n, nTh+1);
}
int main(){
    int n;
    scanf("%d", &n);    
    printUsingRecur(n, 1);
    return 0;
}

// codeForces problem "A. Print Recursion" solution in C
// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

// Input:
// ============
// 5

// Output:
// ============
// I love Recursion
// I love Recursion
// I love Recursion
// I love Recursion
// I love Recursion

#include<stdio.h>
void printNum(int n, int i){    
    if(i>n)
    {
        return;
    }
    printNum(n, i+1);
    printf("%d", i);
    if(i!=1)
    {
        printf(" ");
    }   
}
int main(){
    int n;
    scanf("%d", &n);
    int i=1;
    printNum(n, i);
    return 0;
}


// C. Print from N to 1
// time limit per test1 second
// memory limit per test64 megabytes
// Given a number N. Print all numbers from N to 1 separated by a single space.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N (1 ≤ N ≤ 103).

// Output
// Print from N to 1 separated by a single space.

// Example
// Input
// 4
// Output
// 4 3 2 1
// Note
// Make sure don't print any leading or trailing spaces.
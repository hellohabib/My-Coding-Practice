#include <stdio.h>
// হ্যাকার-র‍্যাংক এর প্রব্লেম সলুশন, প্রবলেম নিচে দেওয়া আছে।
void odd_even(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
//---------------------
// for(int i=0; i<n; i++)
//     {
// //    printf("%d", a[i]);
//     }
//---------------------

    int evenCount=0, oddCount=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            evenCount++;
        }
        else if(a[i]%2==0)
        {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }
    printf("%d %d", evenCount, oddCount);    

}

int main(){
    odd_even(); 
    return 0;
}


// হ্যাকার-র‍্যাংক এর প্রব্লেম সলুশন
// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-09/challenges/even-and-odd-8-2
//Even and Odd
// Problem Statement

// You will be given an array A, and the size of that array N. You need to write a function named odd_even() and take input inside that function. The function won't return anything. You need to count the number of even values and number of odd values in that array and print inside the function.

// Input Format

// First line will contain N.
// Next line will contain the array A.
// Constraints

// 1 <= N <= 1000
// 0 <= A[i] <= 10^9; Where 0 <= i < N
// Output Format

// First print the number of even elements, then the number of odd elements separated by a space.
// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// 2 3
// Sample Input 1

// 6
// 0 4 0 6 5 3
// Sample Output 1

// 4 2
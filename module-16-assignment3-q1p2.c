#include<stdio.h>
// হ্যাকার র‍্যাংক প্রব্লেম সলুশন, প্রব্লেম নিচে দেওয়া
int main(){
    int n;
    scanf("%d", &n);
//-- উপরের প্যাটার্ন
    for(int i=1; i<=n; i++){

        for(int j=i; j<=n-1; j++){
            printf(" ");
        }

        for(int j=1; j<=2*i-1; j++)
        {
//---
                if(i==1)
                {
                    printf("#");
                }
                else if(i%2==0)
                {
                    printf("-");
                }
                else 
                {
                    printf("#");
                }
//---
        }
        printf("\n");
    }
//-- নিচের প্যাটার্ন
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++)
        {
            //---
                if(i==1)
                {
                    printf("#");
                }
                else if(i%2==0)
                {
                    printf("-");
                }
                else 
                {
                    printf("#");
                }
            //---

        }
        printf("\n");

    }



    return 0;
}

// - হ্যাকার র‍্যাংক প্রব্লেম
// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-09/challenges/pattern-255-1
// Pattern
// Problem Statement

// You will be given a positive integer N, you need to print a pattern shown below using this N.

// For example: If N=5, the pattern will look like below.

// image

// See the sample test cases for more clarification.

// Input Format

// Input will contain only N.
// Constraints

// 1 <= N <= 100
// Output Format

// Output the pattern.
// Sample Input 0

// 4
// Sample Output 0

//    #
//   ---
//  #####
// -------
//  #####
//   ---
//    #
// Sample Input 1

// 1
// Sample Output 1

// #
// Sample Input 2

// 7
// Sample Output 2

//       #
//      ---
//     #####
//    -------
//   #########
//  -----------
// #############
//  -----------
//   #########
//    -------
//     #####
//      ---
//       #
// Submissions: 272
// Max Score: 20
// Difficulty: Easy
// Rate This Challenge:

    
// More


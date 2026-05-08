#include <stdio.h>
#include <string.h>
// হ্যাকার-র‍্যাংক এর প্রব্লেম সলুশন, প্রবলেম নিচে দেওয়া আছে।
int is_palindrome(char str[]){
        int hstrlen= strlen(str);
        if(hstrlen==1)
        {
            return 1;
        }
        else 
        {
            for(int i=0; i<hstrlen/2; i++)
            {
                if(str[i]!=str[hstrlen-1-i])
                {
                    return 0;
                }

            }
            return 1;
        }   

    }

int main(){
    char name[1000];
    scanf("%s", name);
    int res;
    res=is_palindrome(name);
    if(res==1){
        printf("Palindrome");
    }
    else 
    {
        printf("Not Palindrome");
    }
//    printf("%s", name);
//    int hstlen;
//    hstlen= strlen(name);

//    printf("%d", hstlen);

    return 0;
}

// হ্যাকার-র‍্যাংক এর প্রব্লেম সলুশন
// https://www.hackerrank.com/contests/assignment-03-a-introduction-to-c-programming-a-batch-09/challenges/is-palindrome-15/submissions/code/1408165460

// Problem Statement

// You will be given a string, S, as input. Take this input in the main function. Next, write a function named is_palindrome() that will receive this string. Return type of that function will be integer. The function checks whether the string is a palindrome or not. If it is a palindrome, return 1; otherwise, return 0. Receive this value in the main function and, with the help of that value, print "Palindrome" or "Not Palindrome".

// Palindrome: A palindrome is a word that reads the same forward and backward.

// Input Format

// Input will contain the string S.
// Constraints

// 1 <= |S| <= 1000; Here |S| means the length of the string.
// Output Format

// Output "Palindrome" or "Not Palindrome" without the quotation marks.
// Sample Input 0

// madam
// Sample Output 0

// Palindrome
// Sample Input 1

// abccba
// Sample Output 1

// Palindrome
// Sample Input 2

// x
// Sample Output 2

// Palindrome
// Sample Input 3

// abca
// Sample Output 3

// Not Palindrome
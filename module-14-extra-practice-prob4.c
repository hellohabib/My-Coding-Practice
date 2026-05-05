// Practice - C Programming
// Module 14 - Extra Problem
// Problem Statement:
// Take a number as input and check if it is an even number or odd. 
// Do this 4 times with 4 types of functions:
// 1. Return + Parameter 
// 2. Return + No-Parameter
// 3. No-Return + Parameter
// 4. No-Return + No-Parameter - Done Here
#include<stdio.h>
// 4. No-Return + No-Parameter - Done Here
char* isEvenOrOddType1String(){
    int n;
    scanf("%d", &n);

    if(n==0){
        printf("%s", "Unknown");
    }
    else if (n%2==0){
        printf("%s", "Even");
    }
    else {
        printf("%s", "Odd");
    }
} 

int main(){
    isEvenOrOddType1String();
    return 0;
}
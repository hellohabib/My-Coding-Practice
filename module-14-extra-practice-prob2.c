// Practice - C Programming
// Module 14 - Extra Problem
// Problem Statement:
// Take a number as input and check if it is an even number or odd. 
// Do this 4 times with 4 types of functions:
// 1. Return + Parameter 
// 2. Return + No-Parameter - Done Here
// 3. No-Return + Parameter
// 4. No-Return + No-Parameter
#include<stdio.h>

// 2. Return + No-Parameter

char* isEvenOrOddType1String(){
    int n;
    scanf("%d", &n);
    if(n==0){
        return "Unknown";
    }
    else if (n%2==0){
        return "Even";
    }
    else {
        return "Odd";
    }
} 

int main(){
    
    //printf("%s", isEvenOrOddType1Char(n)); 
    printf("%s", isEvenOrOddType1String()); 

    return 0;
}
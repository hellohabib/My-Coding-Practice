// Practice - C Programming
// Module 14 - Extra Problem
// Problem Statement:
// Take a number as input and check if it is an even number or odd. 
// Do this 4 times with 4 types of functions:
// 1. Return + Parameter - Done Here
// 2. Return + No-Parameter
// 3. No-Return + Parameter
// 4. No-Return + No-Parameter
#include<stdio.h>

// 1. Return + Parameter
// Here function will return a single character -char
char isEvenOrOddType1Char(int n){
    if(n==0){
        return 'U';
    }
    else if (n%2==0){
        return 'E';
    }
    else {
        return 'O';
    }
} 


// 1. Return + Parameter
// Here function will return a string - char* (Characte Pointer)
//C ল্যাঙ্গুয়েজে ফাংশন থেকে সরাসরি স্ট্রিং (যেমন "Even" বা "Odd") রিটার্ন করতে চাইলে আপনাকে ফাংশনের রিটার্ন টাইপ char থেকে পরিবর্তন করে char* (ক্যারেক্টার পয়েন্টার) করতে হবে। কারণ C-তে স্ট্রিং মানেই হলো ক্যারেক্টারের একটি অ্যারে বা পয়েন্টার।
char* isEvenOrOddType1String(int n){
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
    int n;
    scanf("%d", &n);
    
    //printf("%s", isEvenOrOddType1Char(n)); 
    printf("%s", isEvenOrOddType1String(n)); 

    return 0;
}
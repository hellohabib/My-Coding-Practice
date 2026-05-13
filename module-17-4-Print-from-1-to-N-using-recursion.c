#include<stdio.h>

void printNum(int i, int n){
    if(i>n)
    {
        return;        
    }
    printNum(i+1,n);
    printf("%d\n", i);   
    
}

int main(){
    int n;
    int i=1;
    scanf("%dn", &n);
    printNum(i,n);
    return 0;
}
#include<stdio.h>
void printAr(int arLen, int ar[], int arIndx){
    if(arIndx>=arLen)
    {
        return;
    }
    printAr(arLen,ar, arIndx+1);
    printf("%d\n", ar[arIndx]);
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printAr(n,a, 0);   
}
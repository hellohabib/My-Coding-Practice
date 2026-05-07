#include <stdio.h>
int main(){
//--below main
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        for(int s=n-i; s>0; s--)// space
        {
            printf(" ");

        }
        for(int j=i; j>0; j--)//digit
        {
            printf("%d",j);
        }

        printf("\n");

    }


//-- above return 0
    return 0;
}
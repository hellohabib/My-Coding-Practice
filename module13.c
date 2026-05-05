#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star=1;
    int space=n-1;
    for(int i=1; i<=n; i++) // new line
    {
        for(int k=1;k<=space;k++ )// for space
        {
            printf(" ");
        }
        for(int j=1; j<=star; j++) // for *
        {
            printf("%d",j);
        }
        star +=1;
        space --;
        printf("\n");
    }
    return 0;
}
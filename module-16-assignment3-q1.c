#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int j=1;
    for (int i=1; i<=(2*n-1); i++)
    {
    
//-----
        if(i<=n)
        {
            for(int j=1; j<=(2*i-1); j++ )
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
        }
        else{
            for(int j=2*i-1; j>=1; j-- )
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

        }

        printf("\n");
//-----

    }

    return 0;
}
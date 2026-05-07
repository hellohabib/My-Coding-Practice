#include<stdio.h>

int count_before_one(int arr[], int size){
    int count=0;
    
    for(int i=0; i<size; i++)
    {
        if(arr[i]!=1)
        {
            count ++;
        }
        else{
            break;
        }

    }
    return count;

}

int main(){
    //--below main
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int res=count_before_one(a,n);
    printf("%d", res);

    // for(int i=0; i<n; i++)
    // {
    //     printf("%d", a[i]);
    // }
    

    //-- above return 0
    return 0;
}
#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d", &r, &c);
// input
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int specRow;
//specific row
    scanf("%d", &specRow);    
    printf("Printing %dth Row\n", specRow);
    
    for(int i=0; i<c; i++)
    {
        printf("%d ", a[specRow][i]);
    }
    printf("\n");
    int specCol;
//specific column
    scanf("%d", &specCol);    
    printf("Printing %dth Column\n", specCol);
    
    for(int i=0; i<r; i++)
    {
        printf("%d ", a[i][specCol]);
    }
    printf("\n");
    return 0;
}
#include<stdio.h>

int main(){
    int r,c;
    printf("Enter no. of rows and columns:\n");
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
     
    // to print each element
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("value of arr[%d][%d] is %d\n",i,j,arr[i][j]);
        }
        
    }

    // to print in row column form
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}
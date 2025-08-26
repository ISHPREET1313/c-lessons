#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=5;
    int*ptr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
          printf("Enter %d value:",i+1);
          scanf("%d",&ptr[i]);  
    }
    printf("the array is:");
    for (int i = 0; i < n; i++)
    {
          printf("%d ",ptr[i]);
    }
    printf("\n");
    n=10;
    ptr=realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
          printf("Enter %d value:",i+1);
          scanf("%d",&ptr[i]);  
    }
    printf("the array is:");
    for (int i = 0; i < n; i++)
    {
          printf("%d ",ptr[i]);
    }
    
    return 0;
}
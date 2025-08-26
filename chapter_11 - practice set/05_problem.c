#include<stdio.h>
#include<stdlib.h>

int main(){
    int num=7;
    int n=10;
    int*ptr=(int*)malloc(n*sizeof(int));
    printf("the table of %d is:\n",num);
    for (int i = 0; i < n; i++)
    {
        ptr[i]=num*(i+1);
        printf("%d X %d = %d \n",num,i+1,ptr[i]);
    }
    printf("\n");
    n=15;
    ptr=realloc(ptr,n*sizeof(int));
    printf("the table of %d is:\n",num);
    for (int i = 0; i < n; i++)
    {
        ptr[i]=num*(i+1);
        printf("%d X %d = %d \n",num,i+1,ptr[i]);
    }
    
    return 0;
}
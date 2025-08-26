#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("Harry.txt","r");
    int num,num1;
    fscanf(ptr,"%d",&num);
    printf("the value of num is %d\n",num);
    
    fscanf(ptr,"%d",&num1);
    printf("the value of num1 is %d \n",num1);

    fclose(ptr);
    return 0;
}
#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("Harry2.txt","r");

    if (ptr==NULL){
        printf("The file does not exist.\n");
    }
    else{
        int num,num1;
        fscanf(ptr,"%d",&num);
        printf("the value of num is %d\n",num);
        
        fscanf(ptr,"%d",&num1);
        printf("the value of num1 is %d \n",num1);

        fclose(ptr);
        
        return 0;
    }
}
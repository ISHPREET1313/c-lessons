#include<stdio.h>

int main(){
    FILE*ptr;
    ptr=fopen("int.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    fclose(ptr);

    ptr=fopen("int.txt","w");
    fprintf(ptr,"%d",num*2);
    fclose(ptr);
}
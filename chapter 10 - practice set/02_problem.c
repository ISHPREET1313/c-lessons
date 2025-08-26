#include<stdio.h>

int main(){
    FILE*fptr;
    fptr=fopen("table.txt","w");
    int num;
    printf("enter no whose mul table you need:");
    scanf("%d",&num);
    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr,"%d X %d = %d \n",num,i+1,num*(i+1));
    }
    
    fclose(fptr);
    return 0;
}
#include<stdio.h>

int main(){
    int i =2;
    int *y =&i;
    printf("the address of i is %u\n",&i);
    printf("the value of i is %d\n",*y);
    return 0;
}
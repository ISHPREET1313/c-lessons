#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i (j is a integer pointer)
    int k =6;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The address of i is %u\n",&i);
    printf("The address of i is %u\n",j);
    printf("The address of i is %p\n",&k);
    printf("The address of i is %u\n",&k);

    printf("The value at j is %d",*j);
    return 0;
}
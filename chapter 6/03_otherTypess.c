#include<stdio.h>

int main(){
    char i = 'a';
    char* j = &i; // j is a pointer pointing to i (j is a character pointer)
    float k =5.23;
    float* k1 =&k;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The address of i is %p\n",k1);

    printf("The value at j is %c",*j);
    return 0;
}
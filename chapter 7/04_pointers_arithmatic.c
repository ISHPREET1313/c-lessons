#include<stdio.h>

int main(){
    // POINTER ARITHMATIC USING INTEGER
    // int a=5;
    // int*ptr=&a;
    // printf("The addres of a is %u\n",&a);
    // printf("The addres of a is %u\n",ptr);
    // ptr++;
    // printf("The value of ptr is %u\n",ptr);

    // POINTER ARITHMATIC USING char

    char a='a';
    char *ptr=&a;
    printf("The addres of a is %u\n",&a);
    printf("The addres of a is %u\n",ptr);
    ptr++;
    printf("The value of ptr is %u\n",ptr);
    return 0;
}
#include<stdio.h>

int main(){
    // // pointer added with number
    // char a='a';
    // char *ptr=&a;
    // printf("The addres of a is %u\n",ptr);
    // printf("The value of ptr is %u\n",ptr+5);

    // pointer subtract with number
    // char a='a';
    // char *ptr=&a;
    // printf("The addres of a is %u\n",ptr);
    // printf("The value of ptr is %u\n",ptr-5);

    //pointer subtracted other
    char a='a';
    char *ptr=&a;
    char b ='b';
    char *ptr2=&b;
    printf("The addres of a is %u\n",ptr);
    printf("The addres of b is %u\n",ptr2);
    printf("The value of ptr is %u\n",ptr-ptr2);
    return 0;

}
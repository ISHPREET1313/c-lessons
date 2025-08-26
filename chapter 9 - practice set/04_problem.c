#include<stdio.h>

typedef struct complex_no
{
    int real;
    int imaginary;
}c;

int main(){
    c v1={1,2};
    printf("The value of complex number is %d + %di",v1.real,v1.imaginary);
    return 0;
}
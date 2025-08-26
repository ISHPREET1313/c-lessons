#include<stdio.h>

int main(){
    int a = 4;
    int b =3;
    int c=a+b;
    printf("the value of a is %d and of b is %d and sum is %d\n",a,b,c);
    
    // modulus operator give remainder 
    printf("the remainder when a is divided by b is %d\n",a%b);

    // invalid
    // int d = a^b;
    return 0;
}
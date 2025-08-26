#include<stdio.h>

typedef struct complex_no
{
    int real;
    int imaginary;
}c;

void display(c c){
    printf("The value of complex number is %d + %di\n",c.real,c.imaginary);
}

int main(){
    c charr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter real part:");
        scanf("%d",&charr[i].real);
        printf("enter imaginary part:");
        scanf("%d",&charr[i].imaginary);
        display(charr[i]);
    }
    
    return 0;
}
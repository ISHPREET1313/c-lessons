#include<stdio.h>

void swap(int*x,int*y);
void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a=3,b=4;
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    swap(&a,&b);
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    return 0;
}
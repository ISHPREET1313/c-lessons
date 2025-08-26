#include<stdio.h>


int* sum (int a, int b){
    int c = a+b;
    int* ptr =&c;
    printf("The sum is %d\n",c);
    return ptr;
}

float* average (int a, int b){
    float avg = (a+b)/2.0;
    float*ptr=&avg;
    printf("The avg is %f\n",avg);
    return ptr;
}
int main(){
    int x=4,y=6;
    int*ptr1;
    float*ptr2;
    ptr1=sum(x,y);
    ptr2=average(x,y);

    printf("the address of sum is %u and average is %u",ptr1,ptr2);
    return 0;
}
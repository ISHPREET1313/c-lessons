#include<stdio.h>

int sum(int,int);
int sum (int a, int b){
    a=6; // sum function can not change value of x as a is provided a copy of x
    return a+b;
}
int main(){
    int x =1,y=6;
    printf("the sum of x and y is %d\n",sum(x,y));
    printf("the value of x is %d",x);
    return 0;
}
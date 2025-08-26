#include<stdio.h>

float average_of_3(int a,int b,int c);

float average_of_3(int a, int b,int c){
    return (a+b+c)/3.0;
}

int main(){
    int a=2,b=4,c=5;
    printf("the average of a,b,c is %f",average_of_3(a,b,c));
    return 0;
}
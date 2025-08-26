#include<stdio.h>
/*
int main(){
    int age =5;

    if(age>10){
        printf("we are inside of if statement");
        printf("your age is greater than 10");
    }
    return 0;
} 
    */

int main(){
    int age =15;

    if(age>10){
        printf("we are inside of if statement\n");
        printf("your age is greater than 10\n");
    }
    if(age%5==0){
        printf("we are inside of another if statement\n");
        printf("your age is divisble by 5\n");
    }
    return 0;
}
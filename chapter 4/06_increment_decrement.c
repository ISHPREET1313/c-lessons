#include<stdio.h>

int main(){
    int i =5;
    printf("the value of i is %d\n",i); //5

    i =i +5;
    printf("the value of i is %d\n",i); //10

    printf("the value of i is %d\n",i++); //10
    printf("the value of i is %d\n",i);//11

    printf("the value of i is %d\n",++i);//12

    i+=2; // same as i=i+2
    printf("the value of i is %d\n",i); //14

    // i++ prints i first then increments i (Post increment operator)
    // ++i increments i first then prints i(Pre increment operator)
    return 0;
}
#include<stdio.h>

int main(){
    int age =55;

    if (age>60){
        printf("you can drive and you are senior citizen");
    }
    else if (age>40){
        printf("you can drive and you are elder");
    }
    else if (age>18){
        printf("you can drive");
    }
    else{
        printf("You can't drive");
    }
    return 0;
}
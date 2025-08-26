#include<stdio.h>

int main(){
    int sum=0;
    for(int i =1;i<=10;i++){
        sum+=(8*i);
    }
    printf("the sum of multiples of 8 till 10 is %d", sum);
    return 0;
}
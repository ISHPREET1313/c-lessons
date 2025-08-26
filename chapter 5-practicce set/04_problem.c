#include<stdio.h>

//0,1,1,2,3,5,8,13,21,.....
int fibonaaci(int);

int fibonaaci(int n){
    if(n==1||n==2);{
        return n-1;
    }
    return fibonaaci(n-1)+fibonaaci(n-2);
}
int main(){
    int n =9;
    printf("the value of fibonaaci series at %d is %d",n,fibonaaci(n));
    return 0;
}
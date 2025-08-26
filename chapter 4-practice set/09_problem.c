#include<stdio.h>

int main(){
    int n, factorial=1,i=1;
    scanf("%d",&n);
    while(i<=n){
        factorial*=i;
        i++;    
    }
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}
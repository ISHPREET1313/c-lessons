#include<stdio.h>

int main(){
    int n;
    int factorial=1;
    scanf("%d",&n);
    for (int i = 1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}
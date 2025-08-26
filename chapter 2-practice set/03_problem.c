#include<stdio.h>

int main(){
    int n;
    printf("Enter number to check it is divisble by 97 or not:");
    scanf("%d",&n);
    printf("The remainder is %d\n",n%97);
    printf("If remainder is 0 then given number is divisible by 97");
    return 0;
}
#include<stdio.h>

int sum(int,int); // without this is also working as also declaring them below

int sum(int x , int y){
    // printf("the sum is %d\n",x+y); // this would print ans
    return x+y; // this returns ans of fn 
}

int main(){
    int a = 1;
    int b=2;
    // int c =a +b;
    // printf("The value of c is %d",c);
    int c = sum (a,b); // fn call
    printf("%d",c);

    int a1 = 2;
    int b1=3;
    // int c1 =a1 +b1;
    // printf("The value of c1 is %d",c1);
    sum(a1,b1); // fn call // it would print directly when there is print statement in fn and if it has also return  fn then can also be printed like above

    int a2 = 2;
    int b2=27;
    // int c2 =a2 +b2;
    // printf("The value of c2 is %d",c2);
    sum(a2,b2);
    return 0;
}
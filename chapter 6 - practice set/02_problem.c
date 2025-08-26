#include<stdio.h>

int returning_5(int*ptr){
    printf("the value of ptr is %u\n",ptr);
    printf("the value at ptr is %u",*ptr);
}
int main(){
    int i =2;
    int *ptr =&i;
    printf("the address of i is %u\n",&i);
    printf("the value of i is %d\n",*ptr);
    returning_5(ptr);
    return 0;
}
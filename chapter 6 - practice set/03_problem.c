#include<stdio.h>

int ten_times(int*ptr){
    *ptr = *ptr*10;
    return *ptr;
}
int main(){
    int a =5;
    printf("%d",ten_times(&a));
    return 0;
}
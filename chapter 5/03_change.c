#include<stdio.h>

int change (int a);

int change(int a){
    a=77;               // misnomer
    return 0;
}

int main(){
    int b =22;
    change(b);
    printf("the value of b is %d",b);
}
#include<stdio.h>

int main(){
    int a;
    char ch ='a';
    ch ='c';
    ch='\n';  // represents new line
    printf("Hey I am good \n nice\n");
    printf("Hey I am good \t nice\n");
    printf("Hey I am good \' nice\n");
    printf("Hey I am good \" nice\n");
    printf("Hey I am good \\ nice\n");
    printf("Hey I am good %c nice",ch);
    // printf("Hey I am good " nice");  gives error as compiler gets confused where " is starting"
    return 0;
}
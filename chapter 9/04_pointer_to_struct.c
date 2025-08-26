#include<stdio.h>

struct employee
{
int code; // This declares a new user defined data type!
float salary;
char name[10];
}; // semicolon is important

int main(){
    struct employee e1;
    e1.code = 45;
    struct employee *ptr;
    ptr=&e1;

    printf("%d",(*ptr).code);
    printf("%d",ptr->code);

    return 0;
}
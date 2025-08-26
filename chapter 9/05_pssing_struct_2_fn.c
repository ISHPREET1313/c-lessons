#include<stdio.h>

struct employee
{
int code; // This declares a new user defined data type!
float salary;
char name[10];
}; // semicolon is important

void show(struct employee e){
    printf("%d ",e.code);
    printf("%f ",e.salary);
    printf("%s",e.name);
}
int main(){
    struct employee e1;
    e1.code=2;
    e1.salary=2;
    strcpy(e1.name,"2");
    show(e1);
    return 0;
}
#include<stdio.h>

typedef struct emp{
    int salary;
    float score;
}Employee;

int main(){
    Employee e1;
    Employee *ptr =&e1;
    // (*ptr).salary = 56;
    ptr->salary=56;
    ptr->score=45.3;

    printf("The value of salary is %d and of score is %f",ptr->salary,ptr->score);
}
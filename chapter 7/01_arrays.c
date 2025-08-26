#include<stdio.h>

int main(){
    int marks[90];// reserve space for 90 integers

    marks[0]=45;
    marks[1]=90;
    // we can go till marks[89] ans 0 to 89 = 90 
    printf("Marks of 0 and 1 is %d and %d",marks[0],marks[1]);
    return 0;
}
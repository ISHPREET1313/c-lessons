#include<stdio.h>

int main(){
    int marks[5];
    printf("Enter marks of 5 students:\n");

    /*  manual
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);
    printf("Marks of 0 and 1 is %d and %d",marks[0],marks[1]);
    */


    /*  Semi auto 
    for(int i =0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    printf("Marks of 0 and 1 is %d and %d",marks[0],marks[1]);
    */

    //  Auto
    for(int i =0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    for(int i =0;i<5;i++){
        printf("Marks of %d is %d\n",i,marks[i]);
    }
    return 0;
}
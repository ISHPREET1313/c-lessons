#include<stdio.h>

int main(){
    float marks1,marks2,marks3,Total_marks1,Total_marks2,Total_marks3;
    printf("Enter marks of first subject:");
    scanf("%f",&marks1);
    printf("Enter total marks of first subject:");
    scanf("%f",&Total_marks1);
    printf("Enter marks of Second subject:");
    scanf("%f",&marks2);
    printf("Enter Total marks of Second subject:");
    scanf("%f",&Total_marks2);
    printf("Enter marks of third subject:");
    scanf("%f",&marks3);
    printf("Enter Total marks of third subject:");
    scanf("%f",&Total_marks3);

    float total_marks = Total_marks1+Total_marks2+Total_marks3;
    float Total_marks_percentage = ((marks1+marks2+marks3)/total_marks)*100;
    float percentage1 = marks1/Total_marks1*100;
    float percentage2 = marks2/Total_marks2*100;
    float percentage3 = marks3/Total_marks3*100;

    if (Total_marks_percentage>=40 && percentage1>=33 && percentage2>=33 && percentage3>=33)
        printf("You passed, Congrats!!!");
    else
        printf("You Failed");
    return 0;
}


/* video code (in some better and in some mine)
#include <stdio.h>

int main(){
    int marks1, marks2, marks3;
    // int value_of_harrys_marks;
    // int value_of_rohans_marks;
    // printf("%d",value_of_harrys_marks )
    printf("Enter marks1: \n");
    scanf("%d", &marks1);
    printf("Enter marks2: \n");
    scanf("%d", &marks2);
    printf("Enter marks3: \n");
    scanf("%d", &marks3);
    printf("The marks are %d %d and %d\n", marks1, marks2, marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("You are failed due to less marks in individual subject(s)\n"); 
    }
    else if((marks1 + marks2 + marks3)/3 <40){
        printf("You are failed due less percentage\n"); 
    }
    else{
        printf("You are passed!");
    }
    return 0;
}*/
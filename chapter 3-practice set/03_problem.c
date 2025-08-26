#include <stdio.h>

int main(){
    int income;
    float tax=0; 
    printf("Enter income: \n");
    scanf("%d", &income);
    if(income<=250000){
        tax = 0;
    }
    else if(income>250000 && income<=500000){
        tax = 0.05 * (income - 250000);
    }
    else if(income>500000 && income<=1000000){
        tax = 0.05 * (500000 - 250000) + 0.2 * (income- 500000);
    }
    else {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000- 500000) + 0.3 * (income - 1000000);
    }
    printf("The total tax you need to pay is %.3f", tax);
    return 0;
}


/* my code has  mistakes
#include<stdio.h>

int main(){
    float income;
    printf("Enter your Income (in Lakhs):\n");
    scanf("%f",&income);

    if (income<2.5)
        printf("no tax");
    else if (income>=2.5 && income < 5.0)
        printf("Tax is 5%% ");
    else if (income>=5.0 && income < 10.0)
        printf("Tax is 20%% ");
    else if (income>=10.0)
        printf("Tax is 30%% ");
    return 0;
}
    */
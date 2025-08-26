#include<stdio.h>

float weight(float m);

float weight(float m){
    return m*9.8;
}
int main(){
    float m =54.5;
    printf("the force of attraction by earth is %.2f",weight(m)); 
    return 0;
}
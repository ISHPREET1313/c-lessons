#include<stdio.h>

float C_to_F(float c);

float C_to_F(float c){
    return (9.0/5.0)*c +32;
}
int main(){
    float temp = 27;
    printf("%f Celsius in farhenit is %f",temp,C_to_F(temp));
    return 0;
}
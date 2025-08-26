#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=5;
    float *ptr;
    // int arr[n];  // not allowed
    ptr=(float*)malloc(n*sizeof(float));
    ptr[0]=3;
    ptr[1]=4;
    ptr[2]=5;
    ptr[3]=6;
    ptr[4]=7;
    printf("%f\n",ptr[0]);
    printf("%f\n",ptr[1]);
    printf("%f\n",ptr[2]);
    printf("%f\n",ptr[3]);
    printf("%f\n",ptr[4]);
    return 0;
}
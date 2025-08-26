#include<stdio.h>

int positive_int_count(int arr[],int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]={1,2,3,4,5,-12,123,-21};
    printf("the number of positive integers in array is %d",positive_int_count(arr,8));
    return 0;
}
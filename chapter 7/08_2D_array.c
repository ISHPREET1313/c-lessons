#include<stdio.h>

int main(){
    int arr[3][2]={{1,4},{7,9},{11,22}};
    printf("value at 0 and 0 is %d\n",arr[0][0]);
    printf("value at 0 and 1 is %d\n",arr[0][1]);
    printf("value at 1 and 0 is %d\n",arr[1][0]);
    printf("value at 1 and 1 is %d\n",arr[1][1]);
    printf("value at 2 and 0 is %d\n",arr[2][0]);
    printf("value at 2 and 1 is %d\n",arr[2][1]);
    return 0;
}
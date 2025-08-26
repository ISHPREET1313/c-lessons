#include<stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int*ptr=arr;
    // my code
    if (arr[3]==arr[*ptr+2]){
        printf("Verified");
    }
    else{
        printf("not verified");
    }
    
    //video code
    printf("\nThe value at address %u is %d", ptr+2,*(ptr+2));
    return 0;
}
#include<stdio.h>

void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
        
    }
    printf("\n");
}

void reverse(int arr[],int n){
    /* for  i from 0 to n/2
    arr[i] arr[n-i-1] 
    */
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    printarr(arr,7);
    reverse(arr,7);
    printarr(arr,7);

    return 0;
}
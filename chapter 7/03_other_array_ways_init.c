#include<stdio.h>

int main(){
    int cgpa[3]={9,8,8}; // or int cgpa[]={9,8,8}
    for(int i =0;i<3;i++){
        printf("cgpa of %d is %d\n",i,cgpa[i]);
    }
    return 0;
}
#include<stdio.h>

int main(){
    int marks[]={12,34,53,66};
    
    int *ptr= marks; // Same as int*ptr =&marks[0]
    
    for(int i = 0;i<4;i++){
        printf("the marks at index %d is %d\n",i,*ptr); // same as printf("Marks of %d is %d\n",i,marks[i]);
        ptr++;
    }
    return 0;
}

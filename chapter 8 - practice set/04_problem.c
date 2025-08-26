#include <stdio.h>


char* slice(char str[], int m, int n){
    int i=0, count;  
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;

}
int main(){
    char str[] = "Harry bhai";
    int start,end;
    printf("%s\n",str);
    printf("Enter Starting postion of sliced string:");
    scanf("%d",&start);
    printf("Enter Ending postion of sliced string:");
    scanf("%d",&end);
    
    printf("%s", slice(str, start, end));
    return 0;
}
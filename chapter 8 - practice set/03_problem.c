#include<stdio.h>

int len(char str[]);
int len(char str[]){
    int count= 0;
    for (int i = 0;;i++)
    {
        if(str[count]=='\0'){
            break;
        }
        count++;
    }
    return count;
}
int main(){
    char st[]="Harry";
    printf("length of string is %d",len(st));
    return 0;
}

// video code
/*
#include <stdio.h>


int strlen(char str[]){
    int i=0, count;
    char c = str[i];
    while(c!='\0'){
        c = str[i];
        i++;
    } 
    count = i-1;
    return count;

}
int main(){
    char str[] = "Harry bhai";
    
    printf("%d", strlen(str));
    return 0;
}
*/
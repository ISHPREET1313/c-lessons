#include<stdio.h>

int main(){
    //char s[]={'a','b','c','\0'};
    char s[]="abc"; //same as char s[]={'a','b','c','\0'};
    for (int i = 0; i < 3; i++) // put >=3 then get null charcter also
    {
        printf("Character is %c\n",s[i]);
    }
    
    return 0;
}
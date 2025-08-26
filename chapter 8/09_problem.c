#include<stdio.h>
#include<string.h>

int main(){
    char letter;
    char str[]="Harry bhai";
    printf("enter charcter who to find in string:");
    scanf("%c",&letter);
    int contains=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]==letter){
            contains=1;
            break;
        }
    }
    if(contains){
        printf("It is There");
    }
    else{
        printf("It is not There");
    }
    
    return 0;
}
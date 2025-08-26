#include<stdio.h>
#include<string.h>

int main(){
    char letter;
    char str[]="Harry bhai";
    printf("enter charcter whose count to find in string:");
    scanf("%c",&letter);
    int count=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]==letter){
            count++;
        }
    }
    printf("number of occurences of %c is %d",letter,count);
    
    return 0;
}
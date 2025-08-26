#include<stdio.h>

void copy(char str[],char str_c[]){
    int i =0;
    while(str[i]!=0){
        str_c[i]=str[i];
        i++;
    }
    str_c[i]='\0';
}
int main(){
    char str[] = "Harry bhai"; 
    char str1[50];
    copy(str,str1);
    printf("%s %s",str,str1);
    return 0;
}


// video code
/*
#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}


int main()
{
    char source[] = "harry";
    char target[30];
    mystrcpy(target, source); // target now contains "harry"
    printf("%s %s", source, target);
    return 0;
}
*/
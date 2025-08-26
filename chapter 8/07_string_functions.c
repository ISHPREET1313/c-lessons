#include<stdio.h>
#include<string.h>
int main(){
    char st[]="Harry";
    printf("%d\n",strlen(st));
    
    char target[30];
    strcpy(target,st);
    printf("%s %s\n",st,target);

    char s1[56]="Harry";
    char s2[56]=" bhai";
    strcat(s1,s2);
    printf("%s\n",s1);

    int a = strcmp("fake","joke");
    printf("%d ",a);
    int b = strcmp("joke","fake");
    printf("%d\n",b);
    return 0;
}
#include<stdio.h>

int main(){
    char st[6];
    printf("Enter string using (%%s)");
    scanf("%s",st);
    printf("String using %%s is %s\n",st);
    printf("Enter string using (%%c)\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s",&st[i]);
        fflush(stdin);
    }
    st[5]='\0';
    printf("String using %%c is %s\n",st);
    return 0;
}
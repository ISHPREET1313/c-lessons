#include <stdio.h>

int main()
{ 
    FILE *ptr;
    char name1[34],name2[34];
    int salary1,salary2;
    ptr = fopen("employee.txt", "w");

    printf("Enter name of Employee:");
    scanf("%s",&name1);
    printf("Enter salary of Employee:");
    scanf("%d",&salary1);
    
    printf("Enter name of Employee 2:");
    scanf("%s",&name2);
    printf("Enter salary of Employee 2:");
    scanf("%d",&salary2);
    
    fprintf(ptr,"%s,%d\n",name1,salary1);
    fprintf(ptr,"%s,%d\n",name2,salary2);

    fclose(ptr);

    return 0;
}
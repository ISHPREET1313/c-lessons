#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("table.txt", "r");
    ptr2 = fopen("table2.txt", "a");
    while (1)
    {
        ch = fgetc(ptr); // when all the content of a file has been read break the loop!
        if (ch == EOF)
        {
            break;
        }
        // c
        fprintf(ptr2, "%c", ch);
        fprintf(ptr2, "%c", ch);
    }
    fclose(ptr);
    fclose(ptr2);
    return 0;
}
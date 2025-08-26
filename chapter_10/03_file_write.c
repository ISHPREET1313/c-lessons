#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("harry.txt", "w");
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    FILE *ptr;
    ptr = fopen("harry.txt", "a");
    fprintf(ptr, "%d", num);
    fclose(ptr);

    return 0;
}
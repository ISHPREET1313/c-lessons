#include <stdio.h>

int main()
{
    int i =10;// Declare and initialize 'i' with 10
    int j = i;
    int a = 2, b = 3, c = 4, d = 5; // Declare and initialize multiple variables

    // %d is called format specifier
    // %d is for int, %f is for float and %c is for char
    printf("the value of i is %d and j is %d\n",i,j);
    printf("the value of a is %d and b is %d\n",a,b );
    printf("the value of c is %d and d is %d\n",c,d);
    return 0;
}



/*  HANNDBOOK CODE
    int a;  // Declare an integer variable 'a'

    float b; // Declare a float variable 'b'

    int i = 10; // Declare and initialize 'i' with 10
    int j = i; // Declare 'j' and initialize with 'i'

    int a = 2, b = 3, c = 4, d = 5; // Declare and initialize multiple variables

    int j1 = a + j - i; // Valid: use previously defined variables

    // Invalid: 'a' is used before declaration
    // float b = a + 3;
    // float a = 1.1;
    
    // Valid: Assigning the same value to multiple variables
    int a, b, c, d;
    a = b = c = d = 30; // a, b, c, d all equal to 30
*/
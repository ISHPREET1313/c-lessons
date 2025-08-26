#include <stdio.h>

int main()
{
    int n;
    int not_prime = 0;
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {   
        int i=2;
        do{
            if (n % i == 0 ) // in video he added && n!=2 but it is uneccsary as above is i<n not i<=n so at n=2 i will never reach i=2
            {
                not_prime = 1;
                break;
            }
            i++;
        }while( i < n);
    }
    if (not_prime == 1)
    {
        printf("the given number %d is not a prime number", n);
    }
    else
    {
        printf("the given number %d is a prime number", n);
    }

    return 0;
}
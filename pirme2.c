#include <stdio.h>

int main()
{
    int n, prime = 0, i = 2;
    printf("write a number you want to check whether it is prime or not \n ");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }

        i++;
    }
    if (prime == 1)
    {
        printf("it is not a prime number \n");
    }
    else
    {
        printf("it is a prime number\n");
    }

    return 0;
}
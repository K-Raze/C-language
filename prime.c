#include <stdio.h>

int main()
{
    int n, prime = 0;
    printf("write a number which you want to check whether it is prime or not \n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 1)
    {
        printf("It is not a prime number");
    }
    else
    {
        printf("it is a prime number");
    }

    return 0;
}
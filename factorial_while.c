#include <stdio.h>

int main()
{
    int n, s, i;
    printf("write a number whose factorial you wanted \n");
    scanf("%d", &n);
    i = n;
    while (i >= 1)
    {
        s *= i;
        i--;
    }
    printf("The factorial of %d is %d \n", n, s);

    return 0;
}
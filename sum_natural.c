#include <stdio.h>

int main()
{
    int i = 0, n, s = 0;
    printf("write a number upto which you want the sum of first n natural numbers \n");
    scanf("%d", &n);
    while (i <= n)
    {
        s += i;
        i++;
    }

    printf(" the sum of first %d natural number is %d \n", n, s);
    return 0;
}
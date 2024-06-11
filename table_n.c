#include <stdio.h>

int main()
{
    int n, i;
    printf("write a number n whose table you wanted to print\n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)

    {
        printf("%d \n", n*i);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n, i;
    printf("write a number \n");
    scanf("%d", &n);
    for (i = n; i; i--)
    {
        printf("%d \n", i);
    }

    return 0;
}
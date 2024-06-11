#include <stdio.h>

int main()
{
    int i = 0, n;
    printf("write a number to print natural numbers till it \n");
    scanf("%d", &n);
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= n);

    return 0;
}
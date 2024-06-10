#include <stdio.h>

int main()
{
    int num;
    printf("write a number to check whether it is even or odd \n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("it is an even number");
    }
    else
    {
        printf("it is an odd number ");
    }

    return 0;
}
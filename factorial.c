#include <stdio.h>

int main()
{
    int num, s;
    printf("write a number whose factorial you wanted \n");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        s *= i;
    }
    printf("The factorial of %d is %d \n",num, s);
    return 0;
}
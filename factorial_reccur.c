#include <stdio.h>

int fac(int n);

int main()
{
    int a, b;
    printf("write a number you want factorial of \n");
    scanf("%d", &a);
    b = fac(a);
    printf("its factorial is %d \n", b);
    return 0;
}

int fac(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        int factorial = n * fac(n - 1);
        return factorial;
    }
}
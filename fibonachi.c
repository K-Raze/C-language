#include <stdio.h>
int fibo(int n);
int main()
{
    int num, a;
    printf("write the nth element you want in fibonachi series \n");
    scanf("%d", &num);
    a = fibo(num);
    printf("The element is %d \n", a);
    return 0;
}
int fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }

    else
    {
        int fab = fibo(n - 1) + fibo(n - 2);
        return fab;
    }
}
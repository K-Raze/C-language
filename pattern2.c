#include <stdio.h>
void printpattern(int n);
int main()
{
    int a;
    printf("write a number ,how many lines you want to print \n");
    scanf("%d", &a);
    printpattern(a);
    return 0;
}
void printpattern(int n)
{
    if (n == 1)
    {
        printf("* \n");
        return;
    }
    printpattern(n - 1);
    for (int i = 0; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
}
#include <stdio.h>

int sum(int a, int b);

int main()
{
    int c;
    c = sum(5, 6);
    printf("%d \n", c);
    return 0;
}
int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
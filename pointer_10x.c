#include <stdio.h>

void tenX(int *a);

int main()
{
    int a = 5;
    tenX(&a);
    printf("The final value of a is %d \n", a);
    return 0;
}

void tenX(int *a)
{
    int temp = 10 * (*a);
    *a = temp;
}
#include <stdio.h>
void address(int a);
int main()
{
    int a = 4;
    int *j = &a;
    printf("the address of a is %u \n", j);
    address(a);

    return 0;
}

void address(int a)
{
    int *j = &a;
    printf("the address of a is %u \n", j);
}
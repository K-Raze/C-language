#include <stdio.h>

int main()
{
    int a = 34, b = 35;

    int *ptr = &a;
    int *ptr2 = &b;
    printf("the value of adress of a is %u \n", ptr);
    ptr = ptr + 1;
    printf("the value of adress of a is %u \n", ptr);
    printf("the value of adress of b is %u \n", ptr2);
    int c = ptr - ptr2;
    printf("the value of sub of 2 pointer is  is %u \n", c);
    ptr2 = ptr;
    printf("the value of adress of b is %d \n", ptr2);
    return 0;
}
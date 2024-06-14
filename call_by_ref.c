#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a, b;
    printf("Write two numbers you want to swap \n");
    scanf("%d", &a);
    scanf("%d", &b);
    swap(&a, &b);
    printf("The value of a is %d , the value of b is %d \n", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
#include <stdio.h>
int avg(int a, int b, int c);
int main()
{
    int x, y, z;
    printf("print 3 number to get their average \n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    int average = avg(x, y, z);
    printf("your average is %d\n", average);
    return 0;
}
int avg(int a, int b, int c)
{
    int average = (a + b + c) / 3;
    return average;
}
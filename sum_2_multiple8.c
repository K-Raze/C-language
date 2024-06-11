#include <stdio.h>

int main()
{
    int n, s = 0, i = 0;
    for (int i = 0; i <= 10; i++)
    {
        n = 8 * i;
        s += n;
    }
    printf("The sum of first 10 multiple of 8 is %d \n", s);
    return 0;
}
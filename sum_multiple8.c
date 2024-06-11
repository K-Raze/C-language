#include <stdio.h>

int main()
{
    int s = 0;
    for (int i = 8; i <= 80; i += 8)
    {
        s += i;
    }
    printf("The sum of first 10 multiple of 8 is %d \n", s);
    return 0;
}
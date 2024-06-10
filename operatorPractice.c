#include <stdio.h>

int main()
{
    printf("The value of 3.0/8-2 is %f \n", 3.0 / 8 - 2);
    int n;
    printf("Write a number which you wanted to check whether it is divisible by 97 or not \n");
    scanf("%d", &n);
    printf("If the shown value is 0 then it is divisible by 97 else not: %d \n", n % 97);
    int x = 2, y = 3, z = 3, k = 1;
    printf("the value of 3*x/y-z+k is: %d \n", 3 * x / y - z + k);

    return 0;
}
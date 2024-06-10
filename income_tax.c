#include <stdio.h>

int main()
{
    float inc;
    printf("Write your annual income in lacs \n");
    scanf("%f", &inc);
    if (inc >= 2.5 && inc < 5.0)
    {
        printf("Your total income tax is %f lacs\n", (5 * inc) / 100);
    }
    else if (inc >= 5 && inc < 10.0)
    {
        printf("Your total income tax is %f lacs\n", (20 * inc) / 100);
    }
    else if (inc >= 10.0)
    {
        printf("Your total income tax is %f lacs\n", (30 * inc) / 100);
    }
    else
    {
        printf("You have no income tax to pay");
    }

    return 0;
}
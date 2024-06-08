#include <stdio.h>

int main()
{
    printf("This program will calculate the simple interest for you. \n");
    int principal, SI, rate, time;
    printf("Enter the principal value. \n");
    scanf("%d", &principal);
    printf("Enter the rate value in percentage. \n");
    scanf("%d", &rate);
    printf("Enter the time value in years. \n");
    scanf("%d", &time);
    SI = (principal * rate * time) / 100;
    printf("The simple interest is %d \n", SI);
    return 0;
}
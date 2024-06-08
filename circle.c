#include <stdio.h>

int main()
{
    printf("This will calculate the area of circle for you. \n");
    int a;
    printf("write the radius of your circle \n");
    scanf("%d", &a);
    float b = 3.14;

    printf("this is the area of ur circle %f \n", a * a * b);

    return 0;
}
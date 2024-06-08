#include <stdio.h>

int main()
{
    printf("This will calculate the volume of cylinder for you. \n");

    int a, h;

    printf("write the radius of your cylinder \n");
    scanf("%d", &a);
    float b = 3.14;
    printf("write the height of your cylinder \n");
    scanf("%d", &h);

    printf("this is the volume of your cylinder %f \n", a * a * b * h);

    return 0;
}
#include <stdio.h>

int main()
{
    float c, f;
    printf("write the temperature in celsius to convert it into fahrenheit \n");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("this is the temeperature in fahrenheit %f", f);

    return 0;
}
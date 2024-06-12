#include <stdio.h>

int sq(int a);

int main()
{
    int area, a;
    printf("write the side \n");
    scanf("%d", &a);
    area = sq(a);
    printf("Area of your square is %d \n", area);
    return 0;
}
int sq(int a)
{
    int area;
    area = a * a;
    return area;
}
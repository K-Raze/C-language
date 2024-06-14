#include <stdio.h>

void SA(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}

int main()
{
    int a = 5, b = 7, sum;
    float avg;
    SA(a, b, &sum, &avg);
    printf("the value of sum is %d and average is %f \n", sum, avg);

    return 0;
}
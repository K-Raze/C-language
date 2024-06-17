#include <stdio.h>
#include <math.h>
int main()
{
    double l1, l2, hyp;
    printf("Enter the length of adjacent right sides of a right angle triangle \n");
    scanf("%lf", &l1);
    scanf("%lf", &l2);
    hyp = sqrt(l1 * l1 + l2 * l2);
    printf("The length of hypotneous is %lf \n", hyp);
    return 0;
}
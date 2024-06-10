#include <stdio.h>
// A program to check whether is pass or fail , he needs 33% in each subject and 40% in total
int main()
{
    int maths, physics, chemistry, total, percentage;
    printf("Write your Maths marks \n");
    scanf("%d", &maths);
    printf("Write your Physics marks \n");
    scanf("%d", &physics);
    printf("Write your Chemistry marks \n");
    scanf("%d", &chemistry);
    total = maths + physics + chemistry;
    percentage = total / 3;
    if (maths >= 33 && chemistry >= 33 && physics >= 33 && percentage >= 40)
    {
        printf("You are passed");
    }
    else
    {
        printf("You are failed");
    }

    return 0;
}
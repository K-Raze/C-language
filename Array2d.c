#include <stdio.h>

int main()
{
    int student = 4;
    int subject = 3;
    int marks[4][3];

    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            printf("Enter the marks of student %d in subject %d \n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            printf(" the marks of student %d in subject %d is %d: \n", i + 1, j + 1, marks[i][j]);
        }
    }
    return 0;
}
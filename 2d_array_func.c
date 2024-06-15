#include <stdio.h>

void display(int stu, int sub)
{
    int marks[stu][sub];
    for (int i = 0; i < stu; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("Enter the marks of student %d in subject %d : \n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < stu; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf(" the marks of student %d in subject %d :%d \n", i + 1, j + 1, marks[i][j]);
        }
    }
}

int main()
{
    display(3, 3);
    return 0;
}
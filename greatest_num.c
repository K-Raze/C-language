// This program will find the greatest of four number entered by the user
#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, greatest;
    printf("Write four number you wanted to compare use space between each number \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    greatest = n1;
    if (n2 > greatest)
    {
        greatest =n2;
    }
    if (n3 > greatest)
    {
        greatest=n3;
    }
    if (n4 > greatest)
    {
        greatest=n4;
    }
    printf("The greatest number among these four number is %d \n", greatest);

    return 0;
}
#include <stdio.h>

int main()
{
    int arr[2][2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("The address of arr[%d][%d][%d] is %u \n", i + 1, j + 1, k + 1, &arr[i][j][k]);
            }
        }
    }

    return 0;
}
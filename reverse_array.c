#include <stdio.h>

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 3; i++)
    {
        int temp = arr[6 - i];
        arr[6 - i] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("The value of arr %d is %d \n", i + 1, arr[i]);
    }

    return 0;
}
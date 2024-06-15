#include <stdio.h>

void printarray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is %d \n", i + 1, *(ptr + i));
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    printarray(arr, 5);
    return 0;
}
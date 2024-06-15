#include <stdio.h>

int pos(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("Enter the length of Array \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of an array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int p=pos(arr,n);
    printf("The count of the positive numbers in array is %d\n",p);
    return 0;
}
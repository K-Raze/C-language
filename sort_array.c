#include <stdio.h>

void sort(int *array, int size)
{
    for (int j = 0; j < size - 1; j++)
    {

        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}
void printsort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", array[i]);
    }
}

int main()
{
    int array[] = {5, 6, 7, 4, 3, 9, 8};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    printsort(array, size);
    return 0;
}
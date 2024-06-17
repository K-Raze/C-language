#include <stdio.h>

void sort(char *array, int size)
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
void printsort(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c \n", array[i]);
    }
}

int main()
{
    char array[] = {'F', 'J', 'K', 'Z', 'M', 'L'};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    printsort(array, size);
    return 0;
}
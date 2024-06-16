#include <stdio.h>

void TablePrint(int *tab, int n)
{
    for (int i = 0; i < 10; i++)
    {
        tab[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%dx%d=%d \n", n, i + 1, tab[i]);
    }
}
int main()

{
    int tab[3][10];
    TablePrint(tab[0], 2);
    TablePrint(tab[1], 7);
    TablePrint(tab[2], 9);

    return 0;
}
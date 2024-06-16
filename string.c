#include <stdio.h>

int main()
{
    char *str = "KartiK";
    printf("%s ", str);

    char atr[] = {'K', 'a', 'r', 't', 'i', 'K', '\0'};
    char *ptr = atr;
    for (1; *ptr != '\0'; ptr++)
    {
        printf("%c", *ptr);
    }
    printf("\n");
    return 0;
}
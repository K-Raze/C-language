#include <stdio.h>
#include <string.h>

int main()
{
    char str[35];
    printf("Enter name or something \n");
    fgets(str, 35, stdin);
    str[strlen(str) - 1] = '\0';
    puts(str);
    int a = strlen(str);
    printf("Your name %s have %d words \n", str, a);
    return 0;
}
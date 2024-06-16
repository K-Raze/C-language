#include <stdio.h>
#include <string.h>

int main()
{
    char str[35];
    printf("Enter name or something \n");
    gets(str);
    puts(str);
    int a = strlen(str);
    printf("Your name have %d words \n", a);
    return 0;
}
#include <stdio.h>

int main()
{
    char *str = "Kartik Dhamija";
    printf("%s \n", str);

    char s[34];
    printf("Enter your name \n");
    gets(s);
    printf(" your name is %s \n", s);
    return 0;
}
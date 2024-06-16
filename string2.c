#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "kartik";
    char str3[50] = "pero";
    char str2[35];
    strcpy(str2, str1);
    printf("The value of str2 is %s \n", str2);
    strcat(str1, str2);
    printf("The value of str1 is %s \n", str1);

    return 0;
}
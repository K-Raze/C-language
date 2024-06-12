#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, count = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("write a number between 1-100 \n ");

    while (1)
    {

        scanf("%d", &guess);

        if (guess > num)
        {
            printf("Lower number please \n");
            count++;
        }
        else if (guess < num)
        {
            printf("Higher number please \n");
            count++;
        }
        else if (guess == num)
        {
            printf("you guessed it correct \n");
            count++;
            break;
        }
    }
    printf("Your total number of guess are %d \n", count);
    return 0;
}
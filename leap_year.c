#include <stdio.h> 

int main(){
    int year;
printf("Write a year to check whether it is a leap year or not \n ");
scanf("%d",&year);
if (year%4==0&&year%100==0&&year%400==0)
{
    printf("The year %d is a leap year \n",year);
}
else{
    printf("It is not a leap year ");
}

return 0;
}
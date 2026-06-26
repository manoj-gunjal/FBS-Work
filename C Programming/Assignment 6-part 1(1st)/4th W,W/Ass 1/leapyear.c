#include<stdio.h>
int leapYear();
void main()
{
    int year;

    printf("Enter Year: ");
    scanf("%d",&year);

    leapYear(year);
}

int leapYear(int year)
{
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is Leap Year", year);
    else
        printf("%d is Not Leap Year", year);

    return 0;
}


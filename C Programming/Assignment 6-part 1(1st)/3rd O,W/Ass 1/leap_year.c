#include<stdio.h>
void leapYear();
void main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    leapYear(year);
}

void leapYear(int year)
{
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);
}


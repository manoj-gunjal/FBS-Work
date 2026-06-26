#include<stdio.h>
int divisible();
void main()
{
    int num;

    printf("Enter Number: ");
    scanf("%d",&num);

    divisible(num);
}

int divisible(int num)
{
    if(num%3==0 && num%5==0)
        printf("Divisible by Both");
    else if(num%3==0)
        printf("Divisible by 3 but not by 5");
    else if(num%5==0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");

    return 0;
}


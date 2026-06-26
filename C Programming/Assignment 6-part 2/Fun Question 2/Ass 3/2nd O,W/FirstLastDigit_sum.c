#include<stdio.h>

void firstLastSum(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    firstLastSum(n);
}

void firstLastSum(int n)
{
    int first,last;

    last=n%10;

    while(n>=10)
    {
        n=n/10;
    }

    first=n;

    printf("Sum = %d",first+last);
}
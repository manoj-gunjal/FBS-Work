#include<stdio.h>

int factorial(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    factorial(n);
}

int factorial(int n)
{
    int i,fact=1;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    printf("Factorial = %d",fact);

    return 0;
}
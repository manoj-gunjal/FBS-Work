#include<stdio.h>

void table(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    table(n);
}

void table(int n)
{
    int i;

    for(i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
}
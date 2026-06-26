#include<stdio.h>

void printNumber(int);

void main()
{
    printNumber(10);
}

void printNumber(int n)
{
    int i;

    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
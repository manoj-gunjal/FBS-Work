#include<stdio.h>

void printNumber();

void main()
{
    printNumber();
}

void printNumber()
{
    int i;

    for(i=1; i<=10; i++)
    {
        printf("%d ", i);
    }
}
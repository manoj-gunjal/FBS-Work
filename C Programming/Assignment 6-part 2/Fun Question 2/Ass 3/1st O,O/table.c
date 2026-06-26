#include<stdio.h>

void table();

void main()
{
    table();
}

void table()
{
    int n,i;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
}
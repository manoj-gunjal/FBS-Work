#include<stdio.h>

void prime();

void main()
{
    prime();
}

void prime()
{
    int n, i, count = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            count++;
    }

    if(count==2)
        printf("Prime");
    else
        printf("Not Prime");
}
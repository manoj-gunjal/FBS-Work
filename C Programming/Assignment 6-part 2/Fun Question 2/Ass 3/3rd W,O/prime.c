#include<stdio.h>

int prime();

void main()
{
    prime();
}

int prime()
{
    int n,i,count=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }

    if(count==2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
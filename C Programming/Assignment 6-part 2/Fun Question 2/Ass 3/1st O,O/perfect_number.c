#include<stdio.h>

void perfect();

void main()
{
    perfect();
}

void perfect()
{
    int n,i,sum=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        printf("Perfect");
    else
        printf("Not Perfect");
}

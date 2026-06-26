#include<stdio.h>

void perfectRange();

void main()
{
    perfectRange();
}

void perfectRange()
{
    int n,i,j,sum;

    printf("Enter Limit: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=0;

        for(j=1;j<i;j++)
        {
            if(i%j==0)
                sum=sum+j;
        }

        if(sum==i)
            printf("%d ",i);
    }
}
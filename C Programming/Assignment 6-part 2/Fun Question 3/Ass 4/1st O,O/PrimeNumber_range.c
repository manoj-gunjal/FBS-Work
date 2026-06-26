#include<stdio.h>

void primeRange();

void main()
{
    primeRange();
}

void primeRange()
{
    int n,i,j,count;

    printf("Enter Limit: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        count=0;

        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }

        if(count==2)
            printf("%d ",i);
    }
}
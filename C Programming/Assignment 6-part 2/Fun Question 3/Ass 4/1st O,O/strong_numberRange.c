#include<stdio.h>

void strongRange();

void main()
{
    strongRange();
}

void strongRange()
{
    int n,i,temp,rem,sum,j,fact;

    printf("Enter Limit: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        temp=i;
        sum=0;

        while(temp!=0)
        {
            rem=temp%10;
            fact=1;

            for(j=1;j<=rem;j++)
                fact=fact*j;

            sum=sum+fact;
            temp=temp/10;
        }

        if(sum==i)
            printf("%d ",i);
    }
}
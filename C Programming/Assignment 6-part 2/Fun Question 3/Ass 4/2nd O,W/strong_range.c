#include<stdio.h>

void strongRange(int);

void main()
{
    int n;

    printf("Enter Limit: ");
    scanf("%d",&n);

    strongRange(n);
}

void strongRange(int n)
{
    int i,temp,rem,sum,j,fact;

    for(i=1;i<=n;i++)
    {
        temp=i;
        sum=0;

        while(temp!=0)
        {
            rem=temp%10;
            fact=1;

            for(j=1;j<=rem;j++)
            {
                fact=fact*j;
            }

            sum=sum+fact;
            temp=temp/10;
        }

        if(sum==i)
            printf("%d ",i);
    }
}
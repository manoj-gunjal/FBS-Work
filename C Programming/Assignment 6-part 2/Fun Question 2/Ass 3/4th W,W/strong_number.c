#include<stdio.h>

int strong(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    strong(n);
}

int strong(int n)
{
    int temp=n,rem,sum=0,i,fact;

    while(temp!=0)
    {
        rem=temp%10;
        fact=1;

        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==n)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}
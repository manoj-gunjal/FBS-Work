#include<stdio.h>

void armstrong();

void main()
{
    armstrong();
}

void armstrong()
{
    int n,temp,sum=0,rem;

    printf("Enter Number: ");
    scanf("%d",&n);

    temp=n;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }

    if(sum==n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}
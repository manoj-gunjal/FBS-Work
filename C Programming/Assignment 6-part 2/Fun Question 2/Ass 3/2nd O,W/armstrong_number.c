#include<stdio.h>

void armstrong(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    armstrong(n);
}

void armstrong(int n)
{
    int temp=n,sum=0,rem;

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
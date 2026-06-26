#include<stdio.h>

void sumRange();

void main()
{
    sumRange();
}

void sumRange()
{
    int start,end,sum=0,i;

    printf("Enter Start: ");
    scanf("%d",&start);

    printf("Enter End: ");
    scanf("%d",&end);

    for(i=start;i<=end;i++)
    {
        sum=sum+i;
    }

    printf("Sum = %d",sum);
}
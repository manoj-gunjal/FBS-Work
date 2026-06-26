#include<stdio.h>

int perfect(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    perfect(n);
}

int perfect(int n)
{
    int i,sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        printf("Perfect");
    else
        printf("Not Perfect");

    return 0;
}
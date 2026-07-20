#include<stdio.h>

void prime(int arr[],int n);

void main()
{
    int arr[5];

    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    prime(arr,5);
}

void prime(int arr[],int n)
{
    int i,j,flag;

    for(i=0;i<n;i++)
    {
        flag=1;

        if(arr[i]<2)
            flag=0;

        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                flag=0;
                break;
            }
        }

        if(flag)
            printf("%d ",arr[i]);
    }
}
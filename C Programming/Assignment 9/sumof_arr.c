#include<stdio.h>

void sum(int arr[],int n);

void main()
{
    int arr[5];

    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    sum(arr,5);
}

void sum(int arr[],int n)
{
    int s=0;

    for(int i=0;i<n;i++)
        s+=arr[i];

    printf("Sum=%d",s);
}
#include<stdio.h>

void reverse(int arr[],int n);

void main()
{
    int arr[5];

    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    reverse(arr,5);
}

void reverse(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
        printf("%d ",arr[i]);
}
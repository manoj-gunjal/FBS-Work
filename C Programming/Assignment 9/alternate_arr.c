#include<stdio.h>

void alternate(int arr[],int n);

void main()
{
    int arr[5];

    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    alternate(arr,5);
}

void alternate(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
        printf("%d ",arr[i]);
}
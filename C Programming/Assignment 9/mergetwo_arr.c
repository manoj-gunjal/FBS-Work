#include<stdio.h>

void merge(int arr[],int brr[],int crr[],int n);

void main()
{
    int arr[5],brr[5],crr[10];

    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<5;i++)
        scanf("%d",&brr[i]);

    merge(arr,brr,crr,5);
}

void merge(int arr[],int brr[],int crr[],int n)
{
    int i;

    for(i=0;i<n;i++)
        crr[i]=arr[i];

    for(i=0;i<n;i++)
        crr[i+n]=brr[i];

    for(i=0;i<2*n;i++)
        printf("%d ",crr[i]);
}
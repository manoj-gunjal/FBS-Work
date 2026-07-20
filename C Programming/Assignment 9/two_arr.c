#include<stdio.h>

void addArray(int arr[],int brr[],int crr[],int n);

void main()
{
    int arr[5],brr[5],crr[5];

    printf("Enter First Array:\n");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("Enter Second Array:\n");
    for(int i=0;i<5;i++)
        scanf("%d",&brr[i]);

    addArray(arr,brr,crr,5);
}

void addArray(int arr[],int brr[],int crr[],int n)
{
    for(int i=0;i<n;i++)
        crr[i]=arr[i]+brr[i];

    printf("Third Array:\n");

    for(int i=0;i<n;i++)
        printf("%d ",crr[i]);
}
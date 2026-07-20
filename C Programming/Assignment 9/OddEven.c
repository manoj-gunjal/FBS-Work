#include<stdio.h>

void oddEven(int arr[],int n);

void main()
{
    int arr[5];

    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    oddEven(arr,5);
}

void oddEven(int arr[],int n)
{
    printf("Even:\n");

    for(int i=0;i<n;i++)
        if(arr[i]%2==0)
            printf("%d ",arr[i]);

    printf("\nOdd:\n");

    for(int i=0;i<n;i++)
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);
}
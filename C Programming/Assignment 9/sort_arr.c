#include<stdio.h>

void sort(int arr[],int n);

void main()
{
    int arr[5];

    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    sort(arr,5);
}

void sort(int arr[],int n)
{
    int temp;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("Sorted Array:\n");

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
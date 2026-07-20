#include<stdio.h>

void search(int arr[],int n,int key);

void main()
{
    int arr[5],key;

    printf("Enter array:\n");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("Enter number:");
    scanf("%d",&key);

    search(arr,5,key);
}

void search(int arr[],int n,int key)
{
    int flag=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }

    if(flag)
        printf("Found");
    else
        printf("Not Found");
}
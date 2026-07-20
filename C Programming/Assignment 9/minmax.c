// Using Function


#include<stdio.h>

void minmax(int arr[], int n);

void main()
{
    int arr[5];

    printf("Enter 5 elements:\n");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    minmax(arr,5);
}

void minmax(int arr[], int n)
{
    int min=arr[0],max=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];

        if(arr[i]>max)
            max=arr[i];
    }

    printf("Minimum=%d\n",min);
    printf("Maximum=%d",max);
}
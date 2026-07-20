// 4. Find odd and even among the numbers.

#include<stdio.h>

void main()
{
    int arr[5], i;

    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("Even Numbers:\n");
    for(i=0;i<5;i++)
        if(arr[i]%2==0)
            printf("%d ",arr[i]);

    printf("\nOdd Numbers:\n");
    for(i=0;i<5;i++)
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);
}
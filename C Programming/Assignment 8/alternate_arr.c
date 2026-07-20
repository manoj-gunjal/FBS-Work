// 5. Print alternate elements in array.

#include<stdio.h>

void main()
{
    int arr[5], i;

    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<5;i+=2)
        printf("%d ",arr[i]);
}

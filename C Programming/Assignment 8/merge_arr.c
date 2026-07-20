// 8. Merge two arrays

#include<stdio.h>

void main()
{
    int arr[5], brr[5], crr[10], i;

    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<5;i++)
        scanf("%d",&brr[i]);

    for(i=0;i<5;i++)
        crr[i]=arr[i];

    for(i=0;i<5;i++)
        crr[i+5]=brr[i];

    printf("Merged Array:\n");

    for(i=0;i<10;i++)
        printf("%d ",crr[i]);
}
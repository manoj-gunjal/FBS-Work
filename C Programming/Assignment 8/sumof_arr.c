// 3. Find sum of all numbers.

#include<stdio.h>

void main()
{
    int arr[5], i, sum=0;

    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<5;i++)
        sum += arr[i];

    printf("Sum = %d", sum);
}
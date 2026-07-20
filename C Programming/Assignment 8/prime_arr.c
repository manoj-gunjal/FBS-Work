// 6. Accept array and print only prime numbers of array.

#include<stdio.h>

void main()
{
    int arr[5], i, j, flag;

    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("Prime Numbers:\n");

    for(i=0;i<5;i++)
    {
        flag=1;

        if(arr[i]<2)
            flag=0;

        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                flag=0;
                break;
            }
        }

        if(flag)
            printf("%d ",arr[i]);
    }
}
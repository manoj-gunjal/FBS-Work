#include <stdio.h>
#include <stdlib.h>

int sumArray(int *, int);

void main()
{
    int *arr, n, i;

    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sumArray(arr, n);
}

int sumArray(int *arr, int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum=%d", sum);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int minmax(int *, int);

void main()
{
    int *arr, n, i;

    printf("Enter Size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    minmax(arr, n);
}

int minmax(int *arr, int n)
{
    int i, min, max;

    min = max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Min=%d\nMax=%d", min, max);

    return 0;
}
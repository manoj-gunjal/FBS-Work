#include <stdio.h>
#include <stdlib.h>

int primeArray(int *, int);

void main()
{
    int *arr, n, i;

    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    primeArray(arr, n);
}

int primeArray(int *arr, int n)
{
    int i, j, count;

    for (i = 0; i < n; i++)
    {
        count = 0;

        for (j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
                count++;
        }

        if (count == 2)
            printf("%d ", arr[i]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int alternate(int *, int);

void main()
{
    int *arr, n, i;

    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    alternate(arr, n);
}

int alternate(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i += 2)
        printf("%d ", arr[i]);

    return 0;
}
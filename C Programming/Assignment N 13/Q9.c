#include <stdio.h>
#include <stdlib.h>

int reverse(int *, int);

void main()
{
    int *arr, n, i;

    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverse(arr, n);
}

int reverse(int *arr, int n)
{
    int i;

    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int oddEven(int *, int);

void main()
{
    int *arr, n, i;

    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    oddEven(arr, n);
}

int oddEven(int *arr, int n)
{
    int i, odd = 0, even = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d\nOdd=%d", even, odd);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int search(int *, int, int);

void main()
{
    int *arr, n, i, key;

    printf("Enter Size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter Element: ");
    scanf("%d", &key);

    search(arr, n, key);
}

int search(int *arr, int n, int key)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Found");
            return 0;
        }
    }

    printf("Not Found");
    return 0;
}
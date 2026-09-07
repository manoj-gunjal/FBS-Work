#include <stdio.h>
#include <stdlib.h>

int addArray(int *, int *, int *, int);

void main()
{
    int *a, *b, *c, n, i;

    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));
    c = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    addArray(a, b, c, n);
}

int addArray(int *a, int *b, int *c, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d ", c[i]);
    }

    return 0;
}
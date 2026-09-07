#include <stdio.h>
#include <stdlib.h>

int merge(int *, int *, int, int);

void main()
{
    int *a, *b, n1, n2, i;

    scanf("%d%d", &n1, &n2);

    a = (int *)malloc(n1 * sizeof(int));
    b = (int *)malloc(n2 * sizeof(int));

    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    merge(a, b, n1, n2);
}

int merge(int *a, int *b, int n1, int n2)
{
    int i;

    for (i = 0; i < n1; i++)
        printf("%d ", a[i]);

    for (i = 0; i < n2; i++)
        printf("%d ", b[i]);

    return 0;
}
#include <stdio.h>

struct Product
{
    char name[20];
    float price;
    int qty;
};

void main()
{
    struct Product p[5];
    int i, n;
    float total = 0;

    printf("Enter Number of Products: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", p[i].name);
        scanf("%f", &p[i].price);
        scanf("%d", &p[i].qty);

        total += p[i].price * p[i].qty;
    }

    printf("Total Cost = %.2f", total);
}
#include <stdio.h>

struct Date
{
    int date, month, year;
};

struct Date store();
void display(struct Date);

void main()
{
    struct Date d;

    d = store();
    display(d);
}

struct Date store()
{
    struct Date d;

    scanf("%d%d%d", &d.date, &d.month, &d.year);

    return d;
}

void display(struct Date d)
{
    printf("%d/%d/%d", d.date, d.month, d.year);
}
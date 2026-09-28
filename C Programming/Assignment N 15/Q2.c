#include <stdio.h>

struct Time
{
    int hrs, min, sec;
};

void accept(struct Time *);
void display(struct Time);
struct Time addTime(struct Time, struct Time);
int convertToSec(struct Time);

void main()
{
    struct Time t1, t2, t3;

    accept(&t1);
    accept(&t2);

    t3 = addTime(t1, t2);

    printf("\nAdded Time: ");
    display(t3);

    printf("\nTotal Seconds=%d", convertToSec(t3));
}

void accept(struct Time *t)
{
    scanf("%d%d%d", &t->hrs, &t->min, &t->sec);
}

void display(struct Time t)
{
    printf("%d:%d:%d", t.hrs, t.min, t.sec);
}

struct Time addTime(struct Time t1, struct Time t2)
{
    struct Time t;

    t.sec = t1.sec + t2.sec;
    t.min = t1.min + t2.min;
    t.hrs = t1.hrs + t2.hrs;

    if (t.sec >= 60)
    {
        t.min += t.sec / 60;
        t.sec %= 60;
    }

    if (t.min >= 60)
    {
        t.hrs += t.min / 60;
        t.min %= 60;
    }

    return t;
}

int convertToSec(struct Time t)
{
    return (t.hrs * 3600) + (t.min * 60) + t.sec;
}
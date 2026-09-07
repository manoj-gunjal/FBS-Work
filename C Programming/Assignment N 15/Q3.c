#include <stdio.h>

struct Player
{
    char name[20];
    int matches;
    int runs;
    int wickets;
};

void accept(struct Player p[], int n);
void display(struct Player p[], int n);
void maxData(struct Player p[], int n);

void main()
{
    struct Player p[10];

    accept(p, 10);
    display(p, 10);
    maxData(p, 10);
}

void accept(struct Player p[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nPlayer %d\n", i + 1);

        scanf("%s", p[i].name);
        scanf("%d", &p[i].matches);
        scanf("%d", &p[i].runs);
        scanf("%d", &p[i].wickets);
    }
}

void display(struct Player p[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\n%s %d %d %d",
               p[i].name, p[i].matches, p[i].runs, p[i].wickets);
    }
}

void maxData(struct Player p[], int n)
{
    int i, maxRun = 0, maxWicket = 0;

    for (i = 1; i < n; i++)
    {
        if (p[i].runs > p[maxRun].runs)
            maxRun = i;

        if (p[i].wickets > p[maxWicket].wickets)
            maxWicket = i;
    }

    printf("\nMax Runs Player=%s", p[maxRun].name);
    printf("\nMax Wickets Player=%s", p[maxWicket].name);
}
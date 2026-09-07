#include <stdio.h>
#include <string.h>

struct Player
{
    int jerseyNo;
    char name[30];
    int runs;
    int wickets;
    int matches;
};

void addPlayer(struct Player p[], int *n);
void removePlayer(struct Player p[], int *n);
void searchPlayer(struct Player p[], int n);
void updatePlayer(struct Player p[], int n);
void displayPlayers(struct Player p[], int n);
void topPlayers(struct Player p[], int n);

void main()
{
    struct Player p[100];
    int n = 0, choice;

    do
    {
        printf("\n\n===== PLAYER MANAGEMENT SYSTEM =====");
        printf("\n1. Add Player");
        printf("\n2. Remove Player");
        printf("\n3. Search Player");
        printf("\n4. Update Player");
        printf("\n5. Display All Players");
        printf("\n6. Top Players");
        printf("\n7. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addPlayer(p, &n);
            break;

        case 2:
            removePlayer(p, &n);
            break;

        case 3:
            searchPlayer(p, n);
            break;

        case 4:
            updatePlayer(p, n);
            break;

        case 5:
            displayPlayers(p, n);
            break;

        case 6:
            topPlayers(p, n);
            break;

        case 7:
            printf("\nThank You!");
            break;

        default:
            printf("\nInvalid Choice!");
        }

    } while (choice != 7);
}

void addPlayer(struct Player p[], int *n)
{
    int i, jersey;
    char name[30];

    printf("\nEnter Jersey Number: ");
    scanf("%d", &jersey);

    for (i = 0; i < *n; i++)
    {
        if (p[i].jerseyNo == jersey)
        {
            printf("\nDuplicate Jersey Number Not Allowed!");
            return;
        }
    }

    printf("Enter Player Name: ");
    scanf("%s", name);

    for (i = 0; i < *n; i++)
    {
        if (strcmp(p[i].name, name) == 0)
        {
            printf("\nDuplicate Player Name Not Allowed!");
            return;
        }
    }

    p[*n].jerseyNo = jersey;
    strcpy(p[*n].name, name);

    printf("Enter Runs: ");
    scanf("%d", &p[*n].runs);

    printf("Enter Wickets: ");
    scanf("%d", &p[*n].wickets);

    printf("Enter Matches Played: ");
    scanf("%d", &p[*n].matches);

    (*n)++;

    printf("\nPlayer Added Successfully!");
}

void removePlayer(struct Player p[], int *n)
{
    int jersey, i, pos = -1;

    printf("Enter Jersey Number to Remove: ");
    scanf("%d", &jersey);

    for (i = 0; i < *n; i++)
    {
        if (p[i].jerseyNo == jersey)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        printf("\nPlayer Not Found!");
    }
    else
    {
        for (i = pos; i < *n - 1; i++)
        {
            p[i] = p[i + 1];
        }

        (*n)--;
        printf("\nPlayer Removed Successfully!");
    }
}

void searchPlayer(struct Player p[], int n)
{
    int jersey, i, found = 0;

    printf("Enter Jersey Number to Search: ");
    scanf("%d", &jersey);

    for (i = 0; i < n; i++)
    {
        if (p[i].jerseyNo == jersey)
        {
            printf("\n\nPlayer Found");
            printf("\nJersey No : %d", p[i].jerseyNo);
            printf("\nName      : %s", p[i].name);
            printf("\nRuns      : %d", p[i].runs);
            printf("\nWickets   : %d", p[i].wickets);
            printf("\nMatches   : %d", p[i].matches);

            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("\nPlayer Not Found!");
}

void updatePlayer(struct Player p[], int n)
{
    int jersey, i, found = 0;

    printf("Enter Jersey Number to Update: ");
    scanf("%d", &jersey);

    for (i = 0; i < n; i++)
    {
        if (p[i].jerseyNo == jersey)
        {
            printf("Enter New Runs: ");
            scanf("%d", &p[i].runs);

            printf("Enter New Wickets: ");
            scanf("%d", &p[i].wickets);

            printf("Enter New Matches: ");
            scanf("%d", &p[i].matches);

            found = 1;

            printf("\nPlayer Updated Successfully!");
            break;
        }
    }

    if (found == 0)
        printf("\nPlayer Not Found!");
}

void displayPlayers(struct Player p[], int n)
{
    int i;

    if (n == 0)
    {
        printf("\nNo Players Available!");
        return;
    }

    printf("\n\n===== PLAYER DETAILS =====");

    for (i = 0; i < n; i++)
    {
        printf("\n----------------------------");
        printf("\nJersey No : %d", p[i].jerseyNo);
        printf("\nName      : %s", p[i].name);
        printf("\nRuns      : %d", p[i].runs);
        printf("\nWickets   : %d", p[i].wickets);
        printf("\nMatches   : %d", p[i].matches);
    }
}

void topPlayers(struct Player p[], int n)
{
    int i, maxRun = 0, maxWicket = 0;

    if (n == 0)
    {
        printf("\nNo Players Available!");
        return;
    }

    for (i = 1; i < n; i++)
    {
        if (p[i].runs > p[maxRun].runs)
            maxRun = i;

        if (p[i].wickets > p[maxWicket].wickets)
            maxWicket = i;
    }

    printf("\n\n===== TOP PLAYERS =====");

    printf("\nHighest Runs Player");
    printf("\nName : %s", p[maxRun].name);
    printf("\nRuns : %d", p[maxRun].runs);

    printf("\n\nHighest Wickets Player");
    printf("\nName    : %s", p[maxWicket].name);
    printf("\nWickets : %d", p[maxWicket].wickets);
}
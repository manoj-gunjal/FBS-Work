#include <stdio.h>
#include <string.h>

struct Movie
{
    char title[30];
    char director[30];
    int year;
    char genre[20];
};

void main()
{
    struct Movie m[5];
    int i, n, ch, index = -1;
    char search[30];

    printf("Enter Number of Movies: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", m[i].title);
        scanf("%s", m[i].director);
        scanf("%d", &m[i].year);
        scanf("%s", m[i].genre);
    }

    printf("\nEnter Movie Title to Search: ");
    scanf("%s", search);

    for (i = 0; i < n; i++)
    {
        if (strcmp(m[i].title, search) == 0)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        printf("\nMovie Found");
        printf("\n%s %s %d %s",
               m[index].title,
               m[index].director,
               m[index].year,
               m[index].genre);

        printf("\nEnter New Year: ");
        scanf("%d", &m[index].year);

        printf("\nUpdated Record:");
        printf("\n%s %s %d %s",
               m[index].title,
               m[index].director,
               m[index].year,
               m[index].genre);
    }
    else
    {
        printf("Movie Not Found");
    }
}
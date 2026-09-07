#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

struct Employee store();
void display(struct Employee);

void main()
{
    struct Employee e;

    e = store();
    display(e);
}

struct Employee store()
{
    struct Employee e;

    scanf("%d", &e.id);
    scanf("%s", e.name);
    scanf("%f", &e.salary);

    return e;
}

void display(struct Employee e)
{
    printf("\nID=%d", e.id);
    printf("\nName=%s", e.name);
    printf("\nSalary=%.2f", e.salary);
}
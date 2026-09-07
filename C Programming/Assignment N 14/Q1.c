#include <stdio.h>

struct Student
{
    int rollNo;
    char name[20];
    float marks;
};

struct Student store();
void display(struct Student);

void main()
{
    struct Student s;

    s = store();
    display(s);
}

struct Student store()
{
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    return s;
}

void display(struct Student s)
{
    printf("\nRoll No=%d", s.rollNo);
    printf("\nName=%s", s.name);
    printf("\nMarks=%.2f", s.marks);
}
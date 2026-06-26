#include<stdio.h>
void result();
void main()
{
    int marks;

    printf("Enter Marks: ");
    scanf("%d",&marks);

    result(marks);
}

void result(int marks)
{
    if(marks>=75)
        printf("Distinction");
    else if(marks>=65)
        printf("First Class");
    else if(marks>=55)
        printf("Second Class");
    else if(marks>=45)
        printf("Pass");
    else
        printf("Fail");
}


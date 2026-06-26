#include<stdio.h>
int triangle();
void main()
{
    int a,b,c;

    printf("Enter Three Sides: ");
    scanf("%d%d%d",&a,&b,&c);

    triangle(a,b,c);
}

int triangle(int a, int b, int c)
{
    if(a==b && b==c)
        printf("Equilateral Triangle");
    else if(a==b || b==c || a==c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");

    return 0;
}


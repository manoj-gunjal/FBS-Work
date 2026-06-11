// Accept three sides oftriangle from the user and determine whether the triangle is equilateral, isoscales or scalene.

#include<stdio.h>
void main() {
    int a,b,c;
    printf("Enter three sides:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c) {
        printf("Equilateral Triangle");
    } else if (a==b||b==c||a==c) {
        printf("Isoscales Triangle");
    } else {
        printf("Scalene Triangle");
    }
}
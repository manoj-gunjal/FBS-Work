#include<stdio.h>
void trianglefind();
void main() {
    trianglefind();
}
void trianglefind() {
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
#include<stdio.h>
void digitoperation();
void main() {
    digitoperation();
}
void digitoperation() {
    int a, b;
    printf("Enter number of A:-");
    scanf("%d",&a);
    printf("Enter number of B:-");
    scanf("%d",&b);
    int addition = a+b;
    printf("Add=%d\n",addition);
    int sub = a-b;
    printf("Sub=%d\n",sub);
    int div = a/b;
    printf("Div=%d\n",div);
    int mul = a*b;
    printf("Mul=%d\n",mul);
    int mod = a%b;
    printf("Mod=%d",mod);
}
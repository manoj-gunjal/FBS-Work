#include<stdio.h>
int arithematic();
void main() {
    arithematic();
}

int arithematic() {
    int a, b;
    printf("Enter number of A:-");
    scanf("%d",&a);
    printf("Enter number of B:-");
    scanf("%d",&b);
    printf("Add=%d\n",a+b);
    printf("Sub=%d\n",a-b);
    printf("Div=%d\n",a/b);
    printf("Mul=%d\n",a*b);
    printf("Mod=%d",a%b);
    return 0;
}
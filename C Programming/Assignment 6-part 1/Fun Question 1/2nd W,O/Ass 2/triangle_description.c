#include<stdio.h>
int findtriangle();
void main() {
   int x = findtriangle();
   if(x==1) {
    printf("Equilateral Triangle");
   } else if(x==2) {
    printf("Isoscales Triangle");
   } else {
    printf("Scalene Triangle");
   }
}

int findtriangle() {
     int a,b,c;
    printf("Enter three sides:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c) {
        return 1;
    } else if (a==b||b==c||a==c) {
       return 2;
    } else {
        return 0;
    }
}
#include<stdio.h>
void findgreatest();
void main() {
    findgreatest();
}

void findgreatest() {
    int a = 10;
    int b = 20;
    int c = 25;
    if(a>b&&a>c) {
        printf("a is grater...");
    } else if (b>a&&b>c) {
        printf("b is greater...");
    } else {
        printf("c is greater...");
    }
}
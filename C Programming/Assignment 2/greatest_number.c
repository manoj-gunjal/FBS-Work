// Write a c program to find greatest of three numbers using nesten if-else.

#include<stdio.h>
void main() {
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
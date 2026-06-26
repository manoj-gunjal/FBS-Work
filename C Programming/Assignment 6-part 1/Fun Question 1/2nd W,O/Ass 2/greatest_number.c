#include<stdio.h>
int findgreatest();
void main() {
    int x = findgreatest();
    if(x==1) {
         printf("a is grater...");
    } else if(x==2) {
        printf("b is greater...");
    } else {
        printf("c is greater...");
    }
}

int findgreatest(){
    int a = 40;
    int b = 30;
    int c = 25;
    if(a>b&&a>c) {
        return 1;
    } else if (b>a&&b>c) {
       return 2;
    } else {
       return 0;
    }
}
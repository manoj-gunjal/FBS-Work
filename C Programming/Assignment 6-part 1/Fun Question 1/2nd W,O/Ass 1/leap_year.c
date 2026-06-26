#include<stdio.h>
int leapyear();
void main() {
    int x = leapyear();
    if(x==1) {
        printf("Leap year");
    } else {
        printf("Not leap year");
    }
}
int leapyear() {
    int year=2028;
    if ((year%400==0)||(year%4==0)&&100!=0) {
        return 1;
    } else {
        return 0;
    }
}
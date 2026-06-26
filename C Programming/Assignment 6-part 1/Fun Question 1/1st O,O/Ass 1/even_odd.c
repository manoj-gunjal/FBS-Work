#include<stdio.h>
void evenodd();
void main() {
    evenodd();
}
void evenodd() {
    int num;
    printf("Enter your number");
    scanf("%d",&num);
    if(num%2==0) {
        printf("Number is even");
    } else {
        printf("Number is odd");
    }
}
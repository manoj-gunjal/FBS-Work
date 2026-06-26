#include<stdio.h>
int findage();
void main() {
    int x = findage();
    if(x==1) {
         printf("Person is eligible to vote....");
    } else {
         printf("Person is not eligible to vote....");
    }
}

int findage() {
    int age = 17;
    if(age>=18) {
       return 1;
    } else {
        return 0;
    }
}
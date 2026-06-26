#include<stdio.h>
int findUpperLower();
void main() {
    int x = findUpperLower();
    if(x==1) {
        printf("Uppercase");
    } else if(x==2) {
        printf("Lowecase");
    } else {
        printf("Not Character");
    }
}

int findUpperLower() {
    char ch='A';
    if(ch>='A'&&ch<='Z') {
        return 1;
    } else if (ch>='a'&&ch<='z'){
        return 2;
      } else {
        return 0;
      }
}
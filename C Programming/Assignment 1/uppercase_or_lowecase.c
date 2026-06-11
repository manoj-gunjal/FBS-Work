// Write a c program to check whether a given character is uppercase or lowercase.

#include<stdio.h>
void main() {
    char ch='1';
    if(ch>='A'&&ch<='Z') {
        printf("%c is uppercase",ch);
    } else if (ch>='a'&&ch<='z'){
        printf("%c is lowecase",ch);
      } else {
        printf("%c is not character",ch);
      }
}
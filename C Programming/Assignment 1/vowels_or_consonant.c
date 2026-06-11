// Write a c program to check a given character is a vowel or consonant.

#include<stdio.h>
void main() {
    char ch='a';
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("%c is vowel",ch);
    } else {
        printf("%c is consonant",ch);
    }
}
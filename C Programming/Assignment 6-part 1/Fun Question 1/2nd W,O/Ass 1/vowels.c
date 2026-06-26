#include<stdio.h>
int isvowels();
void main() {
    int x = isvowels();
    if(x==1) {
        printf("Vowel");
    } else {
        printf("Consonant");
    }
}

int isvowels() {
    char ch='a';
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
       return 1;
    } else {
       return 0;
    }
}
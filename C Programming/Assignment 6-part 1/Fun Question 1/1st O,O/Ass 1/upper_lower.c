#include<stdio.h>
void upperlower();
void main() {
    upperlower();
}

void upperlower() {
    char ch;
    printf("Enter a character:-");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("Uppercase");
    } else if (ch>='a'&&ch<='z') {
        printf("Lowercase");
    } else {
        printf("Enter a valid character....");
    }

}
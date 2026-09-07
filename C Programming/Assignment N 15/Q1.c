#include <stdio.h>

struct Book
{
    int id;
    char bname[30];
    char author[30];
    float price;
};

void accept(struct Book *);
void display(struct Book);

void main()
{
    struct Book b;

    accept(&b);
    display(b);
}

void accept(struct Book *b)
{
    printf("Enter Id: ");
    scanf("%d", &b->id);

    printf("Enter Book Name: ");
    scanf("%s", b->bname);

    printf("Enter Author: ");
    scanf("%s", b->author);

    printf("Enter Price: ");
    scanf("%f", &b->price);
}

void display(struct Book b)
{
    printf("\nId=%d", b.id);
    printf("\nBook=%s", b.bname);
    printf("\nAuthor=%s", b.author);
    printf("\nPrice=%.2f", b.price);
}
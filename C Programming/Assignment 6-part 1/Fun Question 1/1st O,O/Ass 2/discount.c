#include<stdio.h>
void finddiscount();
void main() {
    finddiscount();
}

void finddiscount() {
     float price, discount, finalPrice;
    char student;

    printf("Enter purchase amount: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    }
    else
    {
        if(price > 600)
            discount = price * 0.15;
        else
            discount = 0;
    }

    finalPrice = price - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final Amount = %.2f", finalPrice);

}
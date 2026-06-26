#include<stdio.h>
int discount(float price, char student);
void main()
{
    float price;
    char student;

    printf("Enter Purchase Amount: ");
    scanf("%f",&price);

    printf("Are You Student (Y/N): ");
    scanf(" %c",&student);

    discount(price,student);
}

int discount(float price, char student)
{
    float dis, finalPrice;

    if(student=='Y' || student=='y')
    {
        if(price>500)
            dis=price*0.20;
        else
            dis=price*0.10;
    }
    else
    {
        if(price>600)
            dis=price*0.15;
        else
            dis=0;
    }

    finalPrice=price-dis;

    printf("Discount = %.2f\n",dis);
    printf("Final Amount = %.2f",finalPrice);

    return 0;
}


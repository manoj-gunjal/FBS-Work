#include<stdio.h>
int discount();
void main()
{
    discount();
}

int discount()
{
    float price, dis, finalPrice;
    char student;

    printf("Enter Purchase Amount: ");
    scanf("%f",&price);

    printf("Are you Student (Y/N): ");
    scanf(" %c",&student);

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
    printf("Final Price = %.2f",finalPrice);

    return 0;
}


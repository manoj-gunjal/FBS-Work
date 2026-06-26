#include<stdio.h>
void salary(float basic);
void main()
{
    float basic;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    salary(basic);
}

void salary(float basic)
{
    float da, ta, hra, total;

    if(basic <= 5000)
    {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total = basic + da + ta + hra;

    printf("Basic Salary = %.2f\n", basic);
    printf("DA = %.2f\n", da);
    printf("TA = %.2f\n", ta);
    printf("HRA = %.2f\n", hra);
    printf("Total Salary = %.2f", total);
}


// Calculating total salary based on basic if basic<=5000 da, ta and hra will be 10%, 20% and 25% respectively otherwise da, ta and hra will be 15%, 25% and 30% respectively.

#include<stdio.h>
void main() {
    float basic = 4000;
    float da, ta, hra, total;
    if(basic<=5000) {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } else {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }
    total = basic + da + ta + hra;
    printf("Basic salary=%.2f\n",basic);
    printf("DA=%.2f\n",da);
    printf("TA=%.2f\n",ta);
    printf("HRA=%.2f\n",hra);
    printf("Total salary=%.2f",total);
}
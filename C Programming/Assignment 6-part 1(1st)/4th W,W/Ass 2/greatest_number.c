#include<stdio.h>
int greatest();
void main()
{
    int a,b,c;

    printf("Enter Three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    greatest(a,b,c);
}

int greatest(int a, int b, int c)
{
    if(a>b && a>c)
        printf("%d is Greatest",a);
    else if(b>a && b>c)
        printf("%d is Greatest",b);
    else
        printf("%d is Greatest",c);

    return 0;
}


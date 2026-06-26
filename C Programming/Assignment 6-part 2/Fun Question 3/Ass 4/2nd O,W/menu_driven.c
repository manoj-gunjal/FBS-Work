#include<stdio.h>

void menu(int);

void main()
{
    int ch;

    printf("\n1. Even or Odd");
    printf("\n2. Prime");
    printf("\n3. Palindrome");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter Choice: ");
    scanf("%d",&ch);

    menu(ch);
}

void menu(int ch)
{
    int n,temp,rev=0,rem,sum=0,i,count=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    switch(ch)
    {
        case 1:
            if(n%2==0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2:
            for(i=1;i<=n;i++)
            {
                if(n%i==0)
                    count++;
            }

            if(count==2)
                printf("Prime");
            else
                printf("Not Prime");
            break;

        case 3:
            temp=n;

            while(temp!=0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }

            if(rev==n)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;

        case 4:
            if(n>0)
                printf("Positive");
            else if(n<0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5:
            temp=n;

            while(temp!=0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }

            printf("Reverse = %d",rev);
            break;

        case 6:
            temp=n;

            while(temp!=0)
            {
                rem=temp%10;
                sum=sum+rem;
                temp=temp/10;
            }

            printf("Sum = %d",sum);
            break;

        default:
            printf("Invalid Choice");
    }
}